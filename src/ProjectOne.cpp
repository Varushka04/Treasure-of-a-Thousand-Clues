#include "Level1.h"
#include "Level2.h"
#include "Level3.h"
#include "GameGUI.h"
#include <memory>
#include <iostream>

// In main.cpp
int main() {
    // auto ui = std::make_shared<GameUI>();                       
    auto ui = new GameUI();
    
    while (ui->isWindowOpen()) {
        switch (ui->getState()) {
        case MENU: 
            ui->renderMenu();

            switch (ui->handleMenuInput()) {
            case 0:
                ui->fadeToState(INTRO1);
                break;
            case -1:
                delete ui;
                return 0;
            case -3:
                ui->setState(HOW_TO_PLAY);
                break;
            }
            break;

        case HOW_TO_PLAY:
            ui->renderHowToPlay();
            ui->handleHowToPlayInput();
            break;

        case INTRO1:
            ui->renderIntro1();
            if (ui->handleIntroInput() == 0 || !ui->textAnimating) {
                ui->fadeToState(INTRO2);
            }
            break;

        case INTRO2:
            ui->renderIntro2();
            if (ui->handleIntroInput() == 1) {
                Level1 level1;
                Level2 level2;
                Level3 level3;
                ui->fadeToState(GAME);
                level1.play(ui); 
               
   

               if (level1.isStoryDone()) {
                  level2.scores = level1.scores;       
                    level2.play(ui);
                }  
                if (level2.isStoryDone()) {
                    level3.scores = level2.scores;
                   level3.play(ui);
                }if (level3.isStoryDone()) {
                    ui->fadeToState(MENU);
                }

            }
            break;

        case GAME:
            // Handled within level1.play()
            
            break;

        case INSTRUCTION_PAGE:
            ui->renderinstructionPage();
            ui->handleInstructionInput();
            break;

        default :
            std::cerr << "Unknow game state encountered!" << std::endl;
            delete ui;
            return -1;
            /*case VIDEO:
                ui->renderVideo("cutscene.mp4");
                if (ui->handleVideoInput()) {
                    ui->fadeToState(GAME);
                }
                break;*/
        }
    }
    delete ui;
    return 0;
}

