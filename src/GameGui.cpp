#include "GameGUI.h"
#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>

sf::Music BackGroundMusic;
//===========================================
void GameUI::loadInstructions(){
    instructionPages[1] =
        "HOW TO PLAY - Quest for One Piece\n\n"
        "GAME OVERVIEW\n"
        "Play as Monkey D. Luffy and guide the Straw Hat crew on their journey across the seas!\n"
        "Answer quiz questions, solve riddles, and make key decisions that shape the story.\n"
        "Wrong answers don't always end the game-but they may lead to new paths, delays, or restarts.\n"
        "Your mission: Assemble the perfect crew and find the legendary treasure, the One Piece!";

    instructionPages[2] =
        "LEVEL-BY-LEVEL GUIDE\n\n"
        "LEVEL 1 - East Blue: Recruit Zoro & Usopp\n"
        "Setting: East Blue islands & Navy bases\n"
        "Gameplay Steps:\n"
        "1. Meet Zoro, tied at a Navy base.\n"
        "2. Decide how to interact with Zoro and Navy guards.";

    instructionPages[3] =
        "LEVEL 1 CONTINUED\n\n"
        " - Correct answer = progress\n"
        " - Wrong = extra story, no reset\n"
        "7. Solve a math puzzle to defeat pirates attacking Kaya.\n";
        

    instructionPages[4] =
        "LEVEL 1 UNIQUE FEATURES\n\n"
        "- Wrong answers give you extra story, not game over.\n"
        "- Full of exploration, dialogue, and light choices.\n"
        "- Designed to teach how the game works.";

    instructionPages[5] =
        "LEVEL 2 - Nami's Journey: Fishmen & Crocodile\n"
        "Setting: Nami's backstory, Alabasta, Grand Line\n"
        "Gameplay Steps:\n"
        "1. Choose whether to chase Nami or continue sailing.\n"  
        " - Wrong answer = retry with added tension\n"
        "2. Learn about Nami's tragic past with the Fishmen.";

    instructionPages[6] =
        "LEVEL 2 CONTINUED\n\n"
        "3. Decide whether to trust her or doubt her.\n"
        "4. Boss fight vs. Fishman Arlong.\n"
        " - Puzzle-based battle.\n"
        " - Discover his weakness and unlock Luffy's power.\n"
        "5. Travel to Alabasta and face Crocodile.\n"
        " - Solve Robin's riddle:\n";
       

    instructionPages[7] =
        "LEVEL 2 FINAL\n\n"
        "7. Final emotional choice: Save the ship or save the crew.\n\n"
        "UNIQUE FEATURES:\n"
        "- Timed puzzles (e.g. during storms).\n"
        "- Deeper story branches.\n"
        "- Riddle-based battles and logic scenes.";

    instructionPages[8] =
        "LEVEL 3 - Thriller Bark & Final Showdown\n"
        "Setting: Florian Triangle, Thriller Bark, haunted ships\n"
        "Goal: Defeat Gecko Moria, save Brook's shadow, and unlock final crew.\n\n"
        "Gameplay Steps:\n"
        "1. Meet Brook (the skeleton musician).\n"
        "2. Decide to help or run.\n"
        "3. Sail to Thriller Bark.\n"
        "4. Solve a riddle at the gate:\n";
        

    instructionPages[9] =
        "LEVEL 3 CONTINUED\n\n"
        "5. Battle against a zombie horde.\n"
        "6. Solve puzzle: Find the zombie weakness.\n"
        " - Wrong = Game Over + restart\n"
        "8. Solve one more riddle during your final move:\n";
        

    instructionPages[10] =
        "LEVEL 3 FINAL\n\n"
        "9. Victory! Brook regains his shadow and joins your crew.\n"
        "10. Bonus challenge: Jinbe appears with one final sea riddle:\n"
        " \"I am always hungry...\" -> Answer: Fire\n\n"
        "UNIQUE FEATURES:\n"
        "- Hardest level (wrong answers = instant restarts).\n"
        "- Puzzle-based combat logic.\n"
        "- Multiple endings and bonus scenes (Jinbe's recruitment).";
    instructionPages[11] =
        "TIPS FOR NEW PLAYERS\n\n"
        "- No One Piece knowledge needed!\n"
        "- Read dialogues carefully-riddles are hidden in the story.\n"
        "- Devil Fruit users can't swim (very important).\n"
        "- Salt destroys shadows (not fire or water).\n"
        "- Don't rush boss fights-observe first.\n\n"
        "Ready to Set Sail?\n"
        "Choose wisely, solve puzzles, and build your dream pirate crew.\n"
        "One Piece awaits!";

}
void GameUI::renderHowToPlay() {
    window.clear();

    // Load background
    if (!howToPlayTexture.loadFromFile("HowToPlay.jpg")) {
        howToPlayTexture.create(window.getSize().x, window.getSize().y);
    }

    sf::Sprite howToPlayBg(howToPlayTexture);
    howToPlayBg.setScale(
        static_cast<float>(window.getSize().x) / howToPlayTexture.getSize().x,
        static_cast<float>(window.getSize().y) / howToPlayTexture.getSize().y
        
    );
    window.draw(howToPlayBg);

    // Initialize first instruction page if not already loaded
    if (instructionPages.empty()) {
        loadInstructions();
    }

    // Display animated instruction text
    if (!instructionTextCreated) {
        currentDisplayText = instructionPages[currentInstructionPage];
        instructionText = createText("", 24, sf::Color::White, 50, 100);
        textAnimationIndex = 0;
        isAnimatingText = true;
        instructionTextCreated = true;
        textAnimationClock.restart();
    }

    // Animate text if needed
    if (isAnimatingText) {
        if (textAnimationClock.getElapsedTime().asSeconds() > 0.05f &&
            textAnimationIndex < currentDisplayText.length()) {
            instructionText.setString(currentDisplayText.substr(0, ++textAnimationIndex));
            textAnimationClock.restart();
        }
        if (textAnimationIndex >= currentDisplayText.length()) {
            isAnimatingText = false;
        }
    }

    window.draw(instructionText);

    // Button positioning
    const float buttonOffsetY = 150;
    const float buttonOffsetX = 50;
    const float buttonWidth = 150;
    const float buttonHeight = 60;

    // Blue button color
    sf::Color buttonColor(50, 100, 200);

    // BACK button (only show if not on first page)
    if (currentInstructionPage > 1) {
        backButton = createText("BACK", 34, sf::Color::White,
            buttonOffsetX + (buttonWidth / 2) - 40,
            window.getSize().y - buttonOffsetY + (buttonHeight / 2) - 15);
        sf::RectangleShape backButtonBg(sf::Vector2f(buttonWidth, buttonHeight));
        backButtonBg.setPosition(buttonOffsetX, window.getSize().y - buttonOffsetY);
        backButtonBg.setFillColor(buttonColor);
        backButtonBg.setOutlineThickness(2);
        backButtonBg.setOutlineColor(sf::Color::White);
        window.draw(backButtonBg);
        window.draw(backButton);
    }

    // NEXT button (changes to "MENU" on last page)
    sf::String nextButtonText = (currentInstructionPage < instructionPages.size()&& currentState == HOW_TO_PLAY) ? "Next" : "Menu";
    nextButtonText = (currentInstructionPage < instructionPages.size() && currentState != HOW_TO_PLAY) ? "Menu" : "Next";
    nextButton = createText(nextButtonText, 34, sf::Color::White,
        window.getSize().x - buttonOffsetX - buttonWidth + (buttonWidth / 2) - 40,
        window.getSize().y - buttonOffsetY + (buttonHeight / 2) - 15);

    sf::RectangleShape nextButtonBg(sf::Vector2f(buttonWidth, buttonHeight));
    nextButtonBg.setPosition(window.getSize().x - buttonOffsetX - buttonWidth,
        window.getSize().y - buttonOffsetY);
    nextButtonBg.setFillColor(buttonColor);
    nextButtonBg.setOutlineThickness(2);
    nextButtonBg.setOutlineColor(sf::Color::White);
    window.draw(nextButtonBg);
    window.draw(nextButton);

    // Page indicator
    sf::Text pageText;
    pageText.setFont(font);
    pageText.setString("Page " + std::to_string(currentInstructionPage) + " of " + std::to_string(instructionPages.size()));
    pageText.setCharacterSize(24);
    pageText.setFillColor(sf::Color::White);
    pageText.setPosition(window.getSize().x / 2 - 50, window.getSize().y - 180);
    window.draw(pageText);

    window.display();
}
void GameUI::renderinstructionPage() {
    window.clear();

    // Load background
    if (!howToPlayTexture.loadFromFile("StrawHatsPirates.png")){
        howToPlayTexture.create(window.getSize().x, window.getSize().y);
    }

    sf::Sprite howToPlayBg(howToPlayTexture);
    howToPlayBg.setScale(
        static_cast<float>(window.getSize().x) / howToPlayTexture.getSize().x,
        static_cast<float>(window.getSize().y) / howToPlayTexture.getSize().y
    );
    window.draw(howToPlayBg);

    // Display animated instruction text
    if (instructionPages.find(instructionPage) != instructionPages.end()) {
        // Create text object if it doesn't exist or page changed
        if (!instructionTextCreated || currentInstructionPage != instructionPage) {
            instructionText = createText("", 24, sf::Color::White, 50, 100);
            fullDisplayText = instructionPages[instructionPage];
            textAnimationIndex = 0;
            textAnimating = true;
            instructionTextCreated = true;
            currentInstructionPage = instructionPage;
            textAnimationClock.restart();
        }

        // Animate text if needed
        if (textAnimating) {
            if (textAnimationClock.getElapsedTime().asSeconds() > 0.05f &&
                textAnimationIndex < fullDisplayText.length()) {
                instructionText.setString(fullDisplayText.substr(0, ++textAnimationIndex));
                textAnimationClock.restart();
            }
            if (textAnimationIndex >= fullDisplayText.length()) {
                textAnimating = false;
            }
        }

        window.draw(instructionText);
    }

    // Button positioning
    const float buttonOffsetY = 150;
    const float buttonOffsetX = 50;
    const float buttonWidth = 150;
    const float buttonHeight = 60;

    // Blue button color
    sf::Color buttonColor(50, 100, 200);

    // BACK button
    backButton = createText("BACK", 34, sf::Color::White,
        buttonOffsetX + (buttonWidth / 2) - 40,
        window.getSize().y - buttonOffsetY + (buttonHeight / 2) - 15);

    // NEXT button
    sf::String nextButtonText = (instructionPage < 11) ? "NEXT" : "MENU";
    nextButton = createText(nextButtonText, 34, sf::Color::White,
        window.getSize().x - buttonOffsetX - buttonWidth + (buttonWidth / 2) - 40,
        window.getSize().y - buttonOffsetY + (buttonHeight / 2) - 15);

    // Button backgrounds
    sf::RectangleShape backButtonBg(sf::Vector2f(buttonWidth, buttonHeight));
    backButtonBg.setPosition(buttonOffsetX, window.getSize().y - buttonOffsetY);
    backButtonBg.setFillColor(buttonColor);
    backButtonBg.setOutlineThickness(2);
    backButtonBg.setOutlineColor(sf::Color::White);

    sf::RectangleShape nextButtonBg(sf::Vector2f(buttonWidth, buttonHeight));
    nextButtonBg.setPosition(window.getSize().x - buttonOffsetX - buttonWidth,
        window.getSize().y - buttonOffsetY);
    nextButtonBg.setFillColor(buttonColor);
    nextButtonBg.setOutlineThickness(2);
    nextButtonBg.setOutlineColor(sf::Color::White);

    window.draw(backButtonBg);
    window.draw(nextButtonBg);
    window.draw(backButton);
    window.draw(nextButton);

    // Page indicator
    sf::Text pageText;
    pageText.setFont(font);
    pageText.setString("Page " + std::to_string(instructionPage) + " of 11");
    pageText.setCharacterSize(24);
    pageText.setFillColor(sf::Color::White);
    pageText.setPosition(window.getSize().x / 2 - 50, window.getSize().y - 180);
    window.draw(pageText);

    window.display();
}
int GameUI::handleHowToPlayInput() {
    sf::Event event;
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            window.close();
            return -1;
        }

        if (event.type == sf::Event::MouseButtonPressed) {
            sf::Vector2f mousePos = window.mapPixelToCoords(
                sf::Mouse::getPosition(window));

            // Handle BACK button
            if (currentInstructionPage > 1 && backButton.getGlobalBounds().contains(mousePos)) {
                playClickSound();
                currentInstructionPage--;
                instructionTextCreated = false;
                isAnimatingText = true;
                return 0;
            }

            // Handle NEXT/MENU button
            if (nextButton.getGlobalBounds().contains(mousePos)) {
                playClickSound();
                if (currentInstructionPage < instructionPages.size()) {
                    currentInstructionPage++;
                    instructionTextCreated = false;
                    isAnimatingText = true;
                }
                else {
                    setState(MENU);
                }
                return 0;
            }

            // Skip animation if clicked anywhere
            if (isAnimatingText) {
                isAnimatingText = false;
                instructionText.setString(currentDisplayText);
            }
        }
    }
    return -2; // No action
}
int GameUI::handleInstructionInput() {
    sf::Event event;
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            window.close();
            return -1;
        }

        if (event.type == sf::Event::MouseButtonPressed) {
            sf::Vector2f mousePos = window.mapPixelToCoords(
                sf::Mouse::getPosition(window));

            if (backButton.getGlobalBounds().contains(mousePos)) {
                playClickSound();
                if (instructionPage > 1) {
                    instructionPage--;
                    instructionTextCreated = false; // Force text recreation
                }
                return 0;
            }
            else if (nextButton.getGlobalBounds().contains(mousePos)) {
                playClickSound();
                if (instructionPage < 11) {
                    instructionPage++;
                    instructionTextCreated = false; // Force text recreation
                }
                else {
                    setState(MENU);
                }
                return 0;
            }
        }

        // Skip animation if clicked anywhere
        if (event.type == sf::Event::MouseButtonPressed && textAnimating) {
            textAnimating = false;
            instructionText.setString(fullDisplayText);
        }
    }
    return -2;
}
void GameUI::updateProgressBar() {
    float fillHeight = (progressPercentage / 100.0f) * progressBarBackground.getSize().y;
    progressBarFill.setSize(sf::Vector2f(progressBarFill.getSize().x, fillHeight));
    progressBarFill.setPosition(20, (window.getSize().y / 2 + 150) - fillHeight);

    if (progressPercentage <= 33) {
        progressBarFill.setFillColor(sf::Color(255, 50, 50));
    }
    else if (progressPercentage <= 66) {
        progressBarFill.setFillColor(sf::Color(255, 165, 0));
    }
    else {
        progressBarFill.setFillColor(sf::Color(50, 150, 255));
    }

    progressText.setString(std::to_string(progressPercentage) + "%");
}

void GameUI::setProgress(int percentage) {
    if (percentage >= 0 && percentage <= 100) {
        progressPercentage = percentage;
        updateProgressBar();
    }
}

int GameUI::getProgress() const {
    return progressPercentage;
}







// return bool if the window is still open == called in the main 
bool GameUI::isWindowOpen() const {
    return window.isOpen();
}

// constructor(GAMEUI) create the window size , load a font
GameUI::GameUI() : window(sf::VideoMode::getDesktopMode(), "One Piece Adventure", sf::Style::Close) {
    if (!font.loadFromFile("BRLNSB.TTF")) {
        throw std::runtime_error("Failed to load font");
    }
    
    // Extra Sound Effects
    if (!playGameBuffer.loadFromFile("PlayGame.mp3")) {
        throw std::runtime_error("Failed to play game sound not found");
    }playGameSound.setBuffer(playGameBuffer);
    

    if (!exitGameBuffer.loadFromFile("PlayGame.mp3")) {
        std::cerr << "Error: Couldngt load the play game sound" << std::endl;
    }exitGameSound.setBuffer(exitGameBuffer);
    

    //Background sound
    if (!BackGroundMusic.openFromFile("BackgroundMusic.mp3")) {
        std::cerr << "Error: Couldnt load the background music" << std::endl;
    }
    else {
        BackGroundMusic.setLoop(true);
        BackGroundMusic.setVolume(20.f);
        BackGroundMusic.play();
    }


    //================================================================================================================
    progressBarBackground.setSize(sf::Vector2f(30, 300));
    progressBarBackground.setPosition(20, window.getSize().y / 2 - 200);
    progressBarBackground.setFillColor(sf::Color(50, 50, 50, 200));
    progressBarBackground.setOutlineThickness(2);
    progressBarBackground.setOutlineColor(sf::Color::White);

    progressBarFill.setSize(sf::Vector2f(30, 0));
    progressBarFill.setPosition(20, window.getSize().y / 2 + 200);
    progressBarFill.setFillColor(sf::Color::Red);

    progressText.setFont(font);
    progressText.setCharacterSize(20);
    progressText.setFillColor(sf::Color::White);
    progressText.setPosition(25, window.getSize().y / 2 + 210);

    progressPercentage = 0;
    updateProgressBar();


    progressBarBackground.setSize(sf::Vector2f(30, 300));
    progressBarBackground.setPosition(20, window.getSize().y / 2 - 150);
    progressBarBackground.setFillColor(sf::Color(50, 50, 50));
    progressBarBackground.setOutlineThickness(2);
    progressBarBackground.setOutlineColor(sf::Color::White);

    progressBarFill.setSize(sf::Vector2f(30, 0));
    progressBarFill.setPosition(20, window.getSize().y / 2 - 150);
    progressBarFill.setFillColor(sf::Color::Red);

    progressText.setFont(font);
    progressText.setCharacterSize(20);
    progressText.setFillColor(sf::Color::White);
    progressText.setPosition(25, window.getSize().y / 2 + 160);

    progressPercentage = 0;
    updateProgressBar();
    // Add the new how to play button
    menuHowToPlayButton = createText("HOW TO PLAY", 60, sf::Color::White,
        window.getSize().x / 2 - 100,
        window.getSize().y / 2 + 200);


    //================================================================================================================


    // Initialize UI elements == Create buttons
    
    exitButton = createText("EXIT", 20, sf::Color::White, window.getSize().x - 80, 0);
    nextButton = createText("NEXT", 30, sf::Color::White, window.getSize().x - 200, window.getSize().y - 150);
    timerText = createText("Time: 00:00", 25, sf::Color::White, 10, 10);
    introContinueText = createText("Click to continue...", 25, sf::Color::Yellow,
        window.getSize().x - 200, window.getSize().y - 100);
   //===============================================================================================================
    


    //==============================================================================================================

}

void GameUI::playClickSound() {
    playGameSound.play();
}



//---------------------------------------------------------------------------------------------------
//Method that used to type texts on the window == called in (intro and renderGame)
void GameUI::typeText(sf::Text& textObj, const std::string& fullText, float speed) {
    // If not already typing, initialize the typing animation
    if (!textAnimating) {
        fullDisplayText = fullText;        // Store the fulltext that must be typed
        textAnimationIndex = 0;            // Indicate that it will start typing from the first character
        textAnimating = true;              // set the typing shower to true cause it will be typing
        textAnimationClock.restart();      // Restart the timer to control typing speed
    }

    // If enough time has passed and there are still characters to type
    if (textAnimationClock.getElapsedTime().asSeconds() > speed &&
        textAnimationIndex < fullDisplayText.length()) {
        textObj.setString(fullDisplayText.substr(0, ++textAnimationIndex));    // It keep on adding the text object with one more character
        textAnimationClock.restart();      // the timer must restart after typing a character
    }

    // Always set the current portion of text (in case no character is added this frame)
    textObj.setString(fullDisplayText.substr(0, textAnimationIndex));

    // If typing is done (full text typed), stop the animation
    if (textAnimationIndex >= fullDisplayText.length()) {
        textAnimating = false;
    }
}

//----------------------------------------------------------------------------------------------------------------------
// This method updates the typing animation for the story text.
// It should be called every frame during the GAME state ; but we did not use this method?
void GameUI::updateTextAnimation() {
    if (textAnimating && currentState == GAME) {
        typeText(storyText, fullDisplayText, 0.05f);
    }
}

//----------------------------------------------------------------------------------------------------------------------
// this method for rendering game scenes during game story (called in Play Method)
// it draws the background, animated story text, choices (if any), and buttons.
void GameUI::renderGame(const std::string& text,
    const std::string& backgroundPath,
    const std::vector<std::string>& choices,
    int scorer) {
    window.clear();

    // Background
    //this will load the dafault backgroung picture for storyMap with no background picture
    if (backgroundPath=="") {
        backgroundTexture.loadFromFile("paperBg.png");
    }
    else {
        backgroundTexture.loadFromFile(backgroundPath);
    }
    backgroundSprite.setTexture(backgroundTexture);

    // Scale image to fit window size-Menu
    backgroundSprite.setScale(
        static_cast<float>(window.getSize().x) / backgroundTexture.getSize().x,
        static_cast<float>(window.getSize().y) / backgroundTexture.getSize().y
    );
    window.draw(backgroundSprite);

    // Story text with animation
    if (storyText.getString() != text || textAnimating) {
        storyText = createText("", 40, sf::Color::White, 220, 200);
        typeText(storyText, text, 0.05f);
    }
    window.draw(storyText);

    //draw bottom panel
    sf::RectangleShape bottomPanel(sf::Vector2f(window.getSize().x, 200));
    bottomPanel.setPosition(0, window.getSize().y - 250);
    bottomPanel.setFillColor(sf::Color(30, 30, 30, 230));//dark grey
    window.draw(bottomPanel);



    // Choices (no animation)
    // create and add button options to vector that store buttons of options
    choiceButtons.clear();
    for (size_t i = 0; i < choices.size(); ++i) {
        choiceButtons.push_back(
            createText(std::to_string(i + 1) + ". " + choices[i], 30,
                sf::Color::Yellow, 50, window.getSize().y - 230 + (i * 30))
                
        );
    }


    // this is for narrator or text with options for drawing
    // for drawing button
    //it will wait till the narrator with option is done typing
    if (!textAnimating   && !choices.empty()) {
        for (auto& button : choiceButtons) {      // then when narrator is done it will draw button of options
            window.draw(button);

        }
        

    } 
   

    // this will draw the next button , for both narrator with options and no options  
     window.draw(nextButton);
 
    // create score text
     
     score = createText("Score :" + std::to_string(scorer), 30, sf::Color::White, window.getSize().x / 2, 5);


    //UI buttons
   
    window.draw(exitButton);
    window.draw(score);

    //To draw Timer
    updateTimer();

    window.draw(timerText);
   // window.draw(scoreTe);
    window.draw(progressBarBackground);
    window.draw(progressBarFill);
    window.draw(progressText);



    window.display();
}


//------------------------------------------------------------------------------------------------------------------------------
// for menu state
// one of render methods Render Menu
// it shows the menu background , Play , exit button
void GameUI::renderMenu() {
    window.clear();
    

    // Load menu background once
    if (menuTexture.getSize() == sf::Vector2u(0, 0)) {
        if (!menuTexture.loadFromFile("Start.jpg")) {
            menuTexture.create(window.getSize().x, window.getSize().y);
        }
    }

    sf::Sprite menuBg(menuTexture);
    // Scale image to fit window size-Menu
    menuBg.setScale(
        static_cast<float>(window.getSize().x) / menuTexture.getSize().x,
        static_cast<float>(window.getSize().y) / menuTexture.getSize().y
    );
    window.draw(menuBg);

    // Initialize buttons once
   // if (menuPlayButton.getString().isEmpty()) {
    menuPlayButton = createText("PLAY", 60, sf::Color::White,
        window.getSize().x / 2 - 100,
        window.getSize().y / 2);
    menuExitButton = createText("EXIT", 60, sf::Color::White,
        window.getSize().x / 2 - 100,
        window.getSize().y / 2 + 100);
    // }

    
    //================================================================================================================
    menuHowToPlayButton = createText("HOW TO PLAY ", 60, sf::Color::White,
        window.getSize().x / 2 - 100,
        window.getSize().y / 2 + 200);

    window.draw(menuHowToPlayButton);
    //=========================================================================================================



    //gameClock.restart();
    window.draw(menuPlayButton);
    window.draw(menuExitButton);
    window.display();
}

//-------------------------------------------------------------------------------------------------------------------------------
// for intro1 state
// it type the introduction , with intro background 
void GameUI::renderIntro1() {
    window.clear();

    if (intro1Texture.getSize() == sf::Vector2u(0, 0)) {
        if (!intro1Texture.loadFromFile("intro.jpg")) {
            intro1Texture.create(window.getSize().x, window.getSize().y);
        }
    }

    sf::Sprite introBg(intro1Texture);
    // Scale image to fit window size-Menu
    introBg.setScale(
        static_cast<float>(window.getSize().x) / intro1Texture.getSize().x,
        static_cast<float>(window.getSize().y) / intro1Texture.getSize().y
    );
    window.draw(introBg);

    // Add your original intro text
    sf::String intro = "The ocean stretches as far as the eye can see.\n"
        "Waves crash against the ship, and the wind carries\n"
        "the scent of adventure.\n\n"
        "Ahead lies the unknown treasures, dangers, and\n"
        "challenges that will test your crew.\n\n"
        "The journey will not be easy. Every choice you\n"
        "make will shape your path. Will you rise to the\n"
        "challenge or be swallowed by the sea?\n\n"
        "Your crew is waiting, Captain. The adventure\n"
        "begins now!";
    
    sf::Text introText;
    introText.setFont(font);
    introText.setCharacterSize(40);
    introText.setPosition(310, 330);
    typeText(introText, intro, 0.001f);
    window.draw(introText);

    
    introContinueText = createText("Click to continue", 25,
        sf::Color::Yellow,
        window.getSize().x - 300,
        window.getSize().y - 150);
    
   /* if (!textAnimating) {
        window.draw(introContinueText);
    }                                    */
    window.display();
}


//---------------------------------------------------------------------------------------------------------------------------------
// for intro2 state
// it shows the backgroung the for level , a click to continue button
void GameUI::renderIntro2() {
    window.clear();

    if (intro2Texture.getSize() == sf::Vector2u(0, 0)) {
        if (!intro2Texture.loadFromFile("introChapterOne.jpg")) {
            intro2Texture.create(window.getSize().x, window.getSize().y);
        }
    }

    sf::Sprite introBg(intro2Texture);
    // Scale image to fit window size-Menu
    introBg.setScale(
        static_cast<float>(window.getSize().x) / intro2Texture.getSize().x,
        static_cast<float>(window.getSize().y) / intro2Texture.getSize().y
    );
    window.draw(introBg);
    gameClock.restart();
    // Add your chapter text
    sf::Text chapterText("", font, 50);
    chapterText.setPosition(150, 200);
    window.draw(chapterText);

    window.draw(introContinueText); // Reuse continue prompt
    window.display();
}


//-------------------------------------------------------------
// for video , but we did not use it yet
// Video State (Placeholder - integrate your video player)
void GameUI::renderVideo(const std::string& videoPath) {
    window.clear(sf::Color::Black);

    sf::Text videoText("Playing: " + videoPath, font, 30);
    videoText.setPosition(50, 50);
    window.draw(videoText);

    // Here you'd integrate your original DrawVideo code
    // Temporary rectangle as placeholder
    sf::RectangleShape videoRect(sf::Vector2f(800, 450));
    videoRect.setPosition(200, 200);
    videoRect.setFillColor(sf::Color::Blue);
    window.draw(videoRect);

    window.display();
}


// use it to create the text 
sf::Text GameUI::createText(const std::string& str, unsigned size,
    sf::Color color, float x, float y) {
    sf::Text text;
    text.setFont(font);
    text.setString(str);
    text.setCharacterSize(size);
    text.setFillColor(color);
    text.setPosition(x, y);
    return text;
}



// Smooth transition between states
void GameUI::fadeToState(GameState newState) {
    // Implement your original fade effect here
    sf::RectangleShape fadeRect(sf::Vector2f(window.getSize()));
    fadeRect.setFillColor(sf::Color::Black);

    for (int alpha = 0; alpha <= 255; alpha += 5) {
        fadeRect.setFillColor(sf::Color(0, 0, 0, alpha));
        window.draw(fadeRect);
        window.display();
    }

    currentState = newState;

    for (int alpha = 255; alpha >= 0; alpha -= 5) {
        fadeRect.setFillColor(sf::Color(0, 0, 0, alpha));
        window.draw(fadeRect);
        window.display();
    }
}


// this method use to handle the buttons in the menu state
int GameUI::handleMenuInput() {
    sf::Event event;
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            playClickSound();
            window.close();
            return -1;
        }

        if (event.type == sf::Event::MouseButtonPressed) {
            playClickSound();
            sf::Vector2f mousePos = window.mapPixelToCoords(
                sf::Mouse::getPosition(window));


            if (menuPlayButton.getGlobalBounds().contains(mousePos)) {   // if play is clicked then it continue with the game
                //fadeToState(INTRO1);
                return 0; // Play
            }
            if (menuExitButton.getGlobalBounds().contains(mousePos)) {  // if the exit button is clicked  then the game exit (window closes)
                window.close();
                return -1; // Exit
            }
            if (menuHowToPlayButton.getGlobalBounds().contains(mousePos)) {
                setState(HOW_TO_PLAY);
                return -3;
            }
        }
    }
    return -2; // No action
}


// handle click to continue button 
int GameUI::handleIntroInput() {
    sf::Event event;
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            playClickSound();
            window.close();
            return -1;
        }

        if (event.type == sf::Event::MouseButtonPressed) {
            playClickSound();
            sf::Vector2f mousePos = window.mapPixelToCoords(
                sf::Mouse::getPosition(window));

            if (currentState == INTRO1 && introContinueText.getGlobalBounds().contains(mousePos)) {
                //fadeToState(INTRO2);
                return 0;
            }
            else {
                //fadeToState(GAME);
                return 1;
            }
        }
    }
    return -2; // No action
}


//------------------------------------------------------------------------------------------------
// this method handle the options clicked 
// and returns the selected choice index, or a special code
// -1 = no choice / window closed, -3 = "Next" button clicked
int GameUI::getChoice() {
    sf::Event event;

    // to handle events all window events 
    while (window.pollEvent(event)) {

        // for the window is closed
        if (event.type == sf::Event::Closed) {
            playClickSound();
            window.close();   // Close the SFML window
            return -1;        // Return -1 to indicate closing
        }

        // for the mouse if it is clicked
        if (event.type == sf::Event::MouseButtonPressed) {
            playClickSound();
            sf::Vector2i mousePos = sf::Mouse::getPosition(window);  // find the mouse position on the window

            if (exitButton.getGlobalBounds().contains(mousePos.x, mousePos.y)) {//return to menu
                return -4;
            }

            // loop through all the choice buttons (but we gonna change it we must use iterators ,you know for marks)
            for (size_t i = 0; i < choiceButtons.size(); ++i) {
                if (choiceButtons[i].getGlobalBounds().contains(  
                    static_cast<float>(mousePos.x),                // Check if the mouse click is inside this choice button
                    static_cast<float>(mousePos.y))) {

                    return static_cast<int>(i); // return the choice index
                }
            }

            // Check if "Next" button was clicked
            if (nextButton.getGlobalBounds().contains(mousePos.x, mousePos.y)) {
                if (textAnimating) {     // if typing animation is still running,but next is clicked then it will just draw the full text 
                    window.clear();
                    storyText.setString(fullDisplayText); // it instantly show full text
                    window.draw(storyText);
                    window.display();
                    textAnimating = false; // Stop animation
                }
                else {
                    // if animation is done, move to next text
                    return -3;
                }
            }
        }
    }

    // no relevant input was detected
    return -1;
}


void GameUI::updateTimer() {
    if (currentState == GAME) {
        sf::Time elapsed = gameClock.getElapsedTime();
        int seconds = elapsed.asSeconds();
        int minutes = seconds / 60;
        seconds = seconds % 60;

        std::stringstream timeString;
        timeString << "Time: " << std::setfill('0') << std::setw(2) << minutes
            << ":" << std::setfill('0') << std::setw(2) << seconds;
        timerText.setString(timeString.str());
    }
}

// In GameUI.cpp
void GameUI::setState(GameState newState) {
    currentState = newState;
    // Reset any state-specific variables here
}

GameState GameUI::getState() const {
    return currentState;
}