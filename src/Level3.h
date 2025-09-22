#pragma once
#include "StorySystem.h"
#include "Feedback.h"

class Level3 : public StorySystem {
public:
    Level3(); // Constructor initializes storyMap

    // Override only what's needed
    bool checkRiddle(int choiceIndex) override;
    void moral(int choiceIndex) override;

private:
    Feedback totalFeedback;



};
