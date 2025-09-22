#pragma once
#include "StorySystem.h"
#include "TemplateClass.h"
#include "Feedback.h"

class Level1 : public StorySystem {
public:
    Level1();

    bool checkRiddle(int choiceIndex) ;
    void moral(int choiceIndex) override;
   // bool checkRiddle(int choiceIndex) override;


private :
    Feedback totalFeedback;
};