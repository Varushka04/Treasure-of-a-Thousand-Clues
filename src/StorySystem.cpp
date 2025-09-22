#include "StorySystem.h"
#include <iostream>
#include <vector>
#include <set>
#include "Level2.h"
#include "Level3.h"

// Move to the next node or storyMap
void StorySystem::moveToNextNode(int choiceIndex) {
    if (!storyMap[currentNode].nextSteps.empty()) {      // check if the nextstep vector is not empty      
        currentNode = storyMap[currentNode].nextSteps[choiceIndex];  // It goes to nextsteps vector and take next step corresponding to the index of the option
     }
    else {
        isDone = true;
    }
}

// get current node text
// this method returns the current line of text from the current story node.
// it checks the currentTextIndex to return the appropriate string.
std::string StorySystem::getCurrentNodeText() const {
    /*const auto& node = storyMap.at(currentNode);
    if (currentTextIndex< node.texts.size()) {    // If currentTextIndex is within bounds, return that line of text
        return node.texts[currentTextIndex];
    }*/const auto& node = storyMap.at(currentNode);
    if (currentTextIndex >= node.texts.size()) {
        return ""; // Text index out of bounds
    }
    return node.texts[currentTextIndex];


    
}

std::string StorySystem::getCurrentNodeBackground() const {
    return storyMap.at(currentNode).background;
}

std::vector<std::string> StorySystem::getCurrentNodeChoices() const {
    return storyMap.at(currentNode).choices;
}

bool StorySystem::isStoryDone() const {
    return isDone;
}


// this method creates the score of booleans
void StorySystem::createScore(int choice) {
    result.add(checkRiddle(choice));
}

// convert from boolean score to int scores and get the total
int StorySystem::calcScore() {
    const std::vector<bool>& res = result.getData();
    Score<int> scores;
    for (bool b : res) {
        if (b) {
            scores.add(10);
        }
    }
    int total = scores.getTotal();

    return total;
}

// check if the question is riddle or not
bool StorySystem::isRiddle() {
    std::set<int> riddles = {13,19,21,26,12,19,20,22,23,27,47,48,49,10,14,18,22,24};
    return riddles.count(currentNode);
}

void StorySystem::updateProgress(GameUI* ui) {

    if (totalRiddles > 0) {
        int baseProgress = 0;
        int maxProgress = 33;

        if (dynamic_cast<Level2*>(this)) {
            baseProgress = 33;
            maxProgress = 33;
        }
        else if (dynamic_cast<Level3*>(this)) {
            baseProgress = 66;
                maxProgress = 34;

        }

        int levelProgress = (correctAnswers * maxProgress) / totalRiddles;
        ui->setProgress(baseProgress + levelProgress);

        

    }
}

// this method runs the story loop, handles text progression and choices for all levels
void StorySystem::play(GameUI* ui) {
    ui->setState(GAME);  // Set the UI state to GAME state
    correctAnswers = 0;
    updateProgress(ui);



    // the main story loop
    while (!isDone && ui->getState() == GAME) {
        const auto& node = storyMap.at(currentNode);   // Get the current story node
        int totalTexts = node.texts.size();            // Number of text lines in this node (since we changed to texts to vector)

        // it render current game scene
        // show choices only if this is the last line of text

        ui->renderGame(
            getCurrentNodeText(),
            getCurrentNodeBackground(),
            (currentTextIndex == totalTexts - 1) ? getCurrentNodeChoices() : std::vector<std::string>{},
            scores
        );


        // wait for user input (choice, next ,menu )
        int choice = ui->getChoice();

        if (choice == -4) {
            ui->fadeToState(MENU);
        }

        // Handle pause menu
        if (choice == -2) {
            ui->setState(MENU); // switch back to menu
            break;
        }

        // if we are not yet at the last text line
        if (currentTextIndex < totalTexts - 1) {
            if (choice == -3) { // "Next" button clicked
                currentTextIndex++; // Move to next text line
            }
            continue; // skip rest of loop and rerender
        }

        // then if it is the last line and there are choices
        if (!getCurrentNodeChoices().empty()) {
            moral(choice);
            createScore(choice);
            if (choice >= 0 && isRiddle()) {
                createScore(choice);
                scores += calcScore();
                if (checkRiddle(choice)) {
                    correctAnswers++;


                }
                totalRiddles++;
                updateProgress(ui);
                scores += calcScore();
                result.clear();
                /**std::cout << "sdadada :" << currentNode << std::endl;
                std::cout << "score :" << calcScore() << std::endl;        */
            }


            if (choice >= 0 && checkRiddle(choice)) {    // If choice is correct for riddles
                currentTextIndex = 0;
                moveToNextNode(choice);
            }
            else if (choice >= 0) {         // If choice is not a riddle or incorrect
                currentTextIndex = 0;
                moveToNextNode(choice);
            }


        }
        // If there are no choices, it will move on
        else if (choice == -3) {
            currentTextIndex = 0;
            moveToNextNode(0); // then next node
        }
    }

}