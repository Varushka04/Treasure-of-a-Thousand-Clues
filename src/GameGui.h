#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include <string>
#include <SFML/Audio.hpp>
#include <unordered_map>

enum GameState { MENU, INTRO1, INTRO2, GAME, VIDEO,HOW_TO_PLAY,INSTRUCTION_PAGE };

class GameUI {
private:
    sf::RenderWindow window;
    sf::Font font;
    GameState currentState = MENU;
    
    //=================
    int instructionPage = 1;
    int currentInstructionPage = 1;
    std::string fullDisplaytext;

    std::vector<sf::Texture> menuAnimationFrames;
    size_t currentFrame = 0;
    sf::Clock animationClock;
    float frameDuration = 10.0f / 96.0f;
    bool animationLoaded = false;
    //=================




    // Text animation
    sf::Clock textAnimationClock;
    unsigned int textAnimationIndex = 0;
    std::string fullDisplayText;
    std::string currentDisplayText;


    //=================
    bool isAnimatingText = false;
    bool instructionTextCreated = false;
    std::unordered_map<int, std::string> instructionPages;

    sf::RectangleShape progressBarBackground;
    sf::RectangleShape progressBarFill;
    int progressPercentage;
    sf::Text progressText;
    
    void updateProgressBar();
    //==================


    //Timer and Score
    sf::Clock gameClock;
    sf::Text timerText;
    sf::Text scoreText;

    //Progress Bar
   
    
    


    

    // Resources
    sf::Texture menuTexture;
    sf::Texture intro1Texture;
    sf::Texture intro2Texture;
    sf::Texture backgroundTexture;


    //======
    sf::Texture howToPlayTexture;
    //=======


    sf::Sprite backgroundSprite;
    


    // UI Elements
    sf::Text menuPlayButton;
    sf::Text menuExitButton;

    sf::Text menuHowToPlayButton;

    sf::Text introContinueText;
    sf::Text exitButton;
    sf::Text nextButton;

    sf::Text backButton;

    sf::Text storyText;
    sf::Text score;

    sf::Text instructionText;

    std::vector<sf::Text> choiceButtons;

public:
    GameUI();
    bool textAnimating = false;

    // State management
    void setState(GameState newState);
    GameState getState() const;
    void fadeToState(GameState newState);

    // Rendering
    void renderMenu();
    void renderIntro1();
    void renderIntro2();
    void renderGame(const std::string& text,
        const std::string& background,
        const std::vector<std::string>& choices,
        int score);

    void renderHowToPlay();
    void renderinstructionPage();

    void renderVideo(const std::string& path);

    // Input
    int getChoice();
    int handleMenuInput();
    int handleIntroInput();

    int handleHowToPlayInput();
    int handleInstructionInput();

    void typeText(sf::Text& textObj, const std::string& fullText, float speed);
    void updateTextAnimation();

    void updateTimer();
    sf::Clock getClock() {
        return gameClock;
    }

    //Play Sound Effect
    sf::Music BackGroundMusic;
   // void playClickSound();
    // for sound
    sf::SoundBuffer playGameBuffer;
    sf::Sound playGameSound;
    sf::SoundBuffer exitGameBuffer;
    sf::Sound exitGameSound;


    void playClickSound();

    //Progress Bar


    void loadInstructions();
    void setProgress(int percentage);
    int getProgress() const;






    // Utility
    bool isWindowOpen() const;
    sf::Text createText(const std::string& str, unsigned size,
        sf::Color color, float x, float y);
};