#pragma once
#pragma once
#include "StorySystem.h"
#include "Feedback.h"

class Level2 : public StorySystem {
public:
    Level2(); // Constructor initializes storyMap

    // Override only what's needed
    bool checkRiddle(int choiceIndex) override;
    void moral(int choiceIndex) override;

private:
    Feedback totalFeedback;


};