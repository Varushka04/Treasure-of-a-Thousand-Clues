#pragma once
#pragma once
#include <unordered_map>
#include <string>
#include <vector>
#include <memory>
#include "GameGUI.h"
#include "TemplateClass.h"

struct StoryNode {
    std::string background;
    std::vector<std::string> texts;
    std::vector<std::string> choices;
    std::vector<int> nextSteps;
};

class StorySystem {
protected:
    std::unordered_map<int, StoryNode> storyMap;
    int currentTextIndex = 0;
    int correctAnswers = 0;
    int currentNode = 1;
    bool isDone = false;
    int totalRiddles = 0;
    
    Score<bool> result;
    


public:
    virtual ~StorySystem() = default;
    int scores = 0;
    
    StorySystem() :currentTextIndex(0) {}
    virtual int getScores() const { return scores; }
    virtual void setScores(int newScores) { scores = newScores; }


    void moveToNextNode(int choiceIndex);

    std::string getCurrentNodeText() const;
    std::string getCurrentNodeBackground() const;
    std::vector<std::string> getCurrentNodeChoices() const;
    bool isStoryDone() const;
    void createScore(int choice);
    int calcScore();
    bool isRiddle();
    void updateProgress(GameUI* ui);



    virtual void play(GameUI* ui);
    virtual bool checkRiddle(int choiceIndex) { return true; }
    virtual void moral(int choiceIndex) = 0;

    int getCorrectAnswers() const {
        return correctAnswers;
    }
    int getTotalRiddles() const {
        return totalRiddles;
    }
};