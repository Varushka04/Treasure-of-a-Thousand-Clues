#include "Level3.h"
#include "Feedback.h"

Level3::Level3() {
	// Initialize the story for Level 3
    totalRiddles = 5;
    storyMap[1] = {
        "Skeleton.jpg",
        {
            "The Thousand Sunny drifts through the dense fog of the Florian\n"
            "Triangle. The world is eerily silent - no waves, no wind, just\n"
            "an unsettling stillness.\n",

            "Suddenly, a haunting violin melody cuts through the mist. Luffy\n"
            "stands at the bow, eyes wide. 'Woah! That sounds cool! Let's\n"
            "check it out!'\n",

            "Nami crosses her arms. 'No way! This place is dangerous. We're\n"
            "leaving!' Usopp trembles, gripping Chopper. 'Ghost stories say\n"
            "people disappear here!'\n",

            "Before they can argue, the fog shifts, revealing a ghostly ship -\n"
            "mast broken, sails tattered. On deck stands a tall, thin skeleton\n"
            "in a black suit and top hat, holding a violin.\n",

            "The skeleton bows dramatically. 'Yohohoho! Pardon me, but may I\n"
            "join your crew?'"
        },
        {
            "\"Yes! A talking skeleton? That's awesome!\"",
            "\"Who... or what are you?\"",
            "\"NOPE! That's a ghost! Get us out of here!\""
        },
        {2, 3, 4}
    };

    storyMap[2] = {
    "Ship2.jpg",
    {
        "Luffy grins wildly, pumping his fist. 'Join my crew!'\n"
        "The skeleton laughs joyfully. 'Yohohoho! What a glorious day!\n"
        "Though... there is one tiny issue-' He gestures dramatically.\n"
        "'I seem to have misplaced my shadow!'"
    },
    {},
    {5}
    };

    storyMap[3] = {
    "Skeleton.jpg",
    {
        "Nami steps forward, eyes narrowed. 'Explain yourself before we\n"
        "let you near our ship!'\n",

        "The skeleton sighs dramatically. 'Ah, how rude of me! I am Brook,\n"
        "a musician - once a man of flesh and bone, now only bone remains!\n"
        "Yohohoho!'\n",

        "His voice turns solemn. 'But I suffer a terrible fate...\n"
        "my shadow was stolen.'"
    },
    {},
    {5}
    };

    storyMap[4] = {
    "ScaredUssop.jpg",
    {
        "Usopp scrambles backward, nearly tripping. 'NOPE! Nope nope nope!\n"
        "I don't trust it! That's a walking dead guy!'\n",

        "The skeleton clutches his chest (where a heart would be). 'Ah!\n"
        "My apologies... I've startled you. But I assure you-' He bows\n"
        "deeply, '-I'm quite friendly. And terribly lonely... Yohohoho!'\n",

        "Luffy bursts out laughing. 'He's hilarious! I say we help him!'"
    },
    {},
    {5}
    };

    storyMap[5] = {
    "ShipWreck.jpg",
    {
        "Brook leads them aboard his wrecked ship, bowing deeply.\n"
        "'Welcome to my humble abode! Yohohoho! I'd offer tea, but...'\n"
        "He gestures to his ribcage. 'No kitchen. No stomach.'\n",

        "Luffy grins. 'So why no shadow? Lose it in a fight?'\n"
        "Brook's cheer fades. 'Stolen by Gecko Moria - ruler of\n"
        "Thriller Bark. His Devil Fruit steals shadows. Without one...'\n"
        "He trembles. 'Sunlight means instant death.'\n",

        "Chopper gasps. 'You've been trapped here all these years?'\n"
        "'Wandering the darkness,' Brook confirms. 'But I yearn to\n"
        "feel the sun again... to be free.'\n",

        "Luffy cracks his knuckles. 'Then let's kick Moria's butt\n"
        "and get your shadow back!'\n",

        "Brook hesitates. 'You'd fight for me? But Thriller Bark...\n"
        "zombies, ghosts, and Moria himself - the greatest monster!'\n",

        "Luffy's grin widens. 'Sounds like fun! Let's go!'\n"
        "Brook bows deeply. 'Then I entrust my fate to you,\n"
        "Captain Luffy! Yohohoho!'"
    },
    {
        "Sail immediately to Thriller Bark",
        "Ask Brook for Thriller Bark details",
        "Refuse and leave Brook behind"
    },
    {6, 7, 8}
    };

    storyMap[6] = {
    "ShipWreck.jpg",
    {
        "Luffy pumps his fists wildly. 'ALRIGHT! Next stop - Thriller Bark!'\n"
        "Nami sighs, gripping the wheel. 'We're really doing this, huh?'\n"
        "She reluctantly steers toward the ominous island looming ahead.\n",

        "Brook claps his bony hands. 'Oh, what joy! I shall prepare my\n"
        "finest concert! Yohohoho! Though I request panty donations-\n"
        "A skeleton must have standards!'"
    },
    {},
    {9}
    };

    storyMap[7] = {
    "Ship2.jpg",
    {
        "Sanji exhales smoke, eyes serious. 'Hold on, shitty skeleton.\n"
        "Give us intel before we charge in.'\n",

        "Brook's bones rattle as he nods. 'Thriller Bark is a floating\n"
        "fortress of horrors! Moria commands zombies, but his strongest\n"
        "is Ryuma - a legendary swordsman possessing my old body's power!'\n",

        "Zoro's blade hums as he grins. 'A legendary samurai? Now this\n"
        "mission just got interesting...'"
    },
    {},
    {9}
    };

    storyMap[8] = {
    "Ship2.jpg",
    {
        "Usopp flaps his arms in panic. 'WAIT! Time-out! Emergency meeting!\n"
        "Ghost island = bad! Home = good! Can we vote on this?!'\n",

        "Brook's shoulders slump. 'Oh... how tragic. Back to drifting alone...\n"
        "Yohohoho... (sniff)' His fake crying echoes hollowly.\n",

        "Luffy plants his sandals firmly. 'Nope. Boring. We're going.'\n"
        "Brook instantly brightens, top hat bouncing. 'OH! What splendid\n"
        "fortune! Onward to glorious adventure! YOHOHOHO!'"
    },
    {},
    {9}
    };

    storyMap[9] = {
    "Thrillerbark.jpg",
    {
        "The Thousand Sunny creaks to a stop before Thriller Bark's\n"
        "towering iron gates. Rusted chains slither like living serpents,\n"
        "while eerie blue torches cast dancing shadows across the deck.\n",

        "A cavernous voice booms from the mist:\n"
        "'ONLY THE WISE MAY PASS! Answer my riddle correctly,\n"
        "and the path opens. Fail... and pay with your SOUL!'\n",

        "The ground trembles as an ancient stone tablet erupts from\n"
        "the fog, its glowing runes pulsing with unnatural light."
    },
    {},
    {10}
    };

    storyMap[10] = {
    "Think.jpg",
    {
        "For the crew to enter, you must solve this riddle:\n"
        "\"I speak without a mouth and hear without ears.\n"
        "I have no body, but I come alive with wind. What am I?\""
    },
    {
        "An Echo",
        "A Ghost",
        "A Whisper"
    },
    {11, 1, 1}
    };

    storyMap[11] = {
    "Thrillerbark.jpg",
    {
        "With a metallic SCREECH, Thriller Bark's gates yawn open. Rusted\n"
        "chains explode like snapped bones as corpse-fog pours through.\n"
        "The crew steps forward - only for the ground to ROAR alive.\n",

        "HUNDREDS of skeletal hands erupt from the soil. Glowing yellow\n"
        "eyes pierce the mist as zombies shamble forward, weapons\n"
        "listening with grave-mold. A hulking undead general steps\n"
        "forward, his rusted nodachi dragging furrows in the earth.\n",

        "'INTRUDERS...' his voice gurgles like swamp water,\n"
        "'YOUR FLESH WILL JOIN OUR RANKS.'\n",

        "Brook adjusts his afro nervously. 'Ah... my former neighbors.\n"
        "Pity they never learned table manners. YOHOHOHO!'\n"
        "(His laughter echoes far too loudly in the dead silence)\n",

        "The zombie horde advances. What's the crew's move?"
    },
    {
        "RETREAT! (Regroup at the gate)",
        "FIGHT! (Face the undead horde)"
    },
    {12, 13}
    };

    storyMap[12] = {
    "Thrillerbark.jpg",
    {
        "Usopp is already mid-sprint toward the gate. 'GENIUS PLAN! OUR FIRST\n"
        "GOOD DECISION ALL DAY!'\n",

        "CLANG! The iron gate slams shut with finality, rusted chains\n"
        "recoiling like awakened serpents. The voice booms again:\n"
        "'NO ESCAPE EXISTS. FIGHT... OR BECOME ONE WITH THE DEAD.'\n",

        "The zombie horde closes in, moldy weapons raised. Yellow eyes\n"
        "pulse in unison as bony fingers twitch toward flesh.\n",

        "Zoro's blades sing from their scabbards. 'Tch. Hard way it is.'\n"
        "Luffy's sandals scrape the earth as he grins. 'HEY! At least\n"
        "they can't die twice!'\n",

        "The crew steels themselves - the battle begins!"
    },
    {},
    {14}
    };


    storyMap[13] = {
    "Thrillerbark.jpg",
    {
        "Luffy's sandals dig into the earth, his grin wild as the undead\n"
        "horde surges forward. 'ALRIGHT! LET'S SEND THESE GUYS BACK TO\n"
        "THE GRAVE!'\n",

        "Zoro's blades flash free with a metallic SHING! 'About damn time\n"
        "for some real cutting practice.' Wado Ichimonji hums hungrily.\n",

        "Sanji's cigarette flares as he spins. 'Disgusting rotting meatbags...\n"
        "But a kick's a kick.' His leg ignites in hellish flames.\n",

        "The crew forms a battle line - Usopp trembling but loading his\n"
        "slingshot, Nami's Clima-Tact crackling with electricity, Chopper\n"
        "popping combat pills. The zombie tide CRASHES against them!"
    },
    {},
    {14}
    };

    storyMap[14] = {
    "Thrillerbark.jpg",
    {
        "The battlefield CHAOS escalates - Luffy's punches crater zombie\n"
        "chests, Zoro's slashes bisect rotting bodies, Sanji's flaming\n"
        "kicks send undead flying... yet they keep reassembling.\n",

        "'THEY WON'T STAY DOWN!' Zoro snarls as severed limbs crawl\n"
        "back together. Brook's jaw clatters in realization.\n",

        "'YOHOHO! Of course! These corpses are just puppets!\n"
        "The shadows inside them are what moves their bodies!'\n",

        "Nami dodges a zombie's grab. 'So how do we stop shadows?!'\n"
        "Brook's bony finger points dramatically toward the kitchen.\n"
        "'We need something that repels spirits!'\n",

        "What weakness should they exploit?"
    },
    {
        "FIRE (Sanji's Diable Jambe)",
        "SEA WATER",
        "SALT"
    },
    {15, 16, 17}
    };

    storyMap[15] = {
    "Thrillerbark.jpg",
    {
        "Sanji's leg becomes a whirling inferno as he spins through\n"
        "the horde - 'Diable Jambe: Flambage Shot!' Zombies burst into\n"
        "flames... then shamble forward unscathed, burning flesh\n"
        "sloughing off bone.\n",

        "'WHAT THE ACTUAL HELL?!' Zoro decapitates three flaming\n"
        "zombies, only for their heads to roll back into place.\n",

        "Brook backflips away. 'YOHOHO! TERRIBLE NEWS! Fire cooks\n"
        "the meatbags but doesn't expel the shadows!'\n",

        "The undead tide OVERWHELMS them - rotting hands grab ankles,\n"
        "moldy teeth sink into shoulders. The world fades to black...\n\n"

        " GAME OVER \n"
        "(The shadows drag you into Thriller Bark's depths)"
    },
    {},
    {1}
    };


    storyMap[16] = {
    "Thrillerbark.jpg",
    {
        "Usopp frantically launches seawater balloons from his slingshot.\n"
        "'TASTE THE OCEAN, YOU WALKING BUFFET SPECIALS!'\n"
        "The zombies pause... then shake off the water like dogs,\n"
        "moldy bandages flapping. Their shadowy grins widen.\n",

        "'IT'S NOT WORKING!' Usopp screeches as rotting hands grab\n"
        "his overall straps. Brook somersaults away, bones rattling.\n"

        "'YOHOHO! SEAWATER WEAKENS DEVIL FRUIT USERS, NOT SHADOWS!'\n"
        "The horde SWARMS over them - a tsunami of decayed flesh and\n"
        "rusty weapons. Darkness consumes all...\n\n"

        " GAME OVER \n"
        "(Your unconscious bodies become Moria's newest trophies)"
    },
    {},
    {1}
    };


    storyMap[17] = {
    "Thrillerbark.jpg",
    {
        "Luffy dives for the kitchen supplies, emerging with fistfuls\n"
        "of salt. 'EAT THIS!' He rugby-tosses it directly into gaping\n"
        "zombie mouths. The effect is INSTANT - \n",

        "AAARGH! The shadows erupt from rotting bodies like black flames,\n"
        "leaving corpses to crumble into dust. Nami pumps her fist.\n"
        "'HAH! Who knew seasoning was their weakness!'\n",

        "Brook's celebration falters. 'Yohoho... wait.' His bony fingers\n"
        "sift through the dissipating shadows. 'None of these were MINE!'\n"

        "The battlefield falls silent. Victory... but the true quest\n"
        "remains. Brook's shadow is still imprisoned somewhere deeper\n"
        "in Thriller Bark's nightmare halls..."
    },
    {},
    {18}
    };

    storyMap[18] = {
    "Thrillerbark.jpg",
    {
        "The last zombie's ashes settle... then a CHILLING laugh\n"
        "reverberates through the ruins. 'KISHISHISHI!'\n",

        "Gecko Moria materializes atop a broken clocktower, his 22-foot\n"
        "frame blotting out the moon. Behind him, chains RATTLE as\n"
        "a 60-foot monstrosity lurches forward - the reanimated\n"
        "ancient giant Oars, stitches pulsing with dark energy.\n",

        "Brook's sword hand trembles. 'MORIA! RETURN WHAT YOU STOLE!'\n"
        "The Warlord licks his lips. 'This talking bones wants his\n"
        "shadow? Too bad...' His grin widens. 'I've sewn it into\n"
        "something STRONGER!'\n",

        "Luffy's sandals scrape stone as he LEAPS forward. 'THEN WE'LL\n"
        "KICK YOUR ASS AND TAKE IT BACK!'\n",

        "The crew must decide - full assault or tactical approach?"
    },
    {
        "CHARGE!",
        "STRATEGIZE!"
    },
    {19, 20}
    };

    storyMap[19] = {
    "Thrillerbark.jpg",
    {
        "Luffy ROCKETS forward without hesitation. 'GEAR SECOND!' His\n"
        "fist blurs toward Moria... only to pass through the Warlord's\n"
        "shadowy body like mist. 'KISHISHISHI! FOOLISH BRAT!'\n",

        "The earth TREMBLES as Oars' massive eyelids snap open - twin\n"
        "yellow suns in the darkness. His fist, larger than the Sunny,\n"
        "COMES DOWN LIKE A METEOR!\n",

        "CRUNCH! The crew is FLATTENED into the earth. Moria wipes\n"
        "away laughter tears. 'Should've studied my Devil Fruit first!'\n\n"

        "CRITICAL FAILURE \n"
        "Lesson: Never charge a Shadow-Shadow user blindly!\n"
        "(Restart from Thriller Bark gates)"
    },
    {},
    {1}
    };

    storyMap[20] = {
    "Thrillerbark.jpg",
    {
        "Zoro's iron grip yanks Luffy back mid-charge. 'IDIOT! His body\n"
        "phases like smoke! Watch the strings!'\n"

        "The crew observes - faint shadow threads pulse between Moria's\n"
        "fingers and Oars' limbs. Brook's jaw clatters. 'YOHOHO!\n"
        "He's just a puppeteer hiding behind his toy!'\n"

        "Nami's Clima-Tact sparks. 'No shadows without light...\n"
        "Sanji! Keep those torches burning! Usopp - salt ready!'\n"

        "Luffy cracks his knuckles with a feral grin. 'NOW we fight\n"
        "smart! Let's wreck his shadowboxing match!'"
    },
    {},
    {22}
    };

    storyMap[22] = {
    "",
    {
        "The crew's trap is set - Luffy coils like a spring, waiting\n"
        "for the exact moment Moria's shadow control falters. Brook's\n"
        "bony fingers tense on his sword hilt. 'YOHOHO! ONE CHANCE!\n"
        "Miss this window and we're shadow-fodder!'\n",

        "Nami snaps her fingers. 'Final test! Solve this to sync our attack:\n"
        "\"The more of me you take, the more you leave behind. What am I?\"'"
    },
    {
        "Memories",
        "Steps",
        "Shadows",
        "Time"
    },
    {1, 23, 1, 1}
    };

    storyMap[23] = {
    "ThrillerBark.jpg",
    {
        "TIMING PERFECT - Luffy's jet-powered fist SMASHES through\n"
        "Moria's defenses just as his shadow weakens. The Warlord\n"
        "collapses, shadows SCREAMING back to their owners.\n",

        "Brook's shadow SLAMS into him. For the first time in decades,\n"
        "he steps into sunlight... and doesn't fade. 'YOHOHOHO!\n"
        "I CAN FEEL MY... well, I CAN FEEL AGAIN!'\n",

        "As Thriller Bark's fog dissipates, Brook's violin plays\n"
        "'Binks' Sake' - the crew singing along off-key but joyous.\n"
        "The Thousand Sunny sails toward new horizons, its musician\n"
        "finally home."
    },
    {},
    {24}
    };

    storyMap[24] = {
    "Ship.jpg",
    {
        "The Sunny's deck vibrates with Brook's lively violin as the crew\n"
        "celebrates - until a SHATTERED hull appears on the horizon.\n"
        "A massive fish-man stands silhouetted against the setting sun,\n"
        "his blue skin crisscrossed with fresh wounds.\n",

        "'Straw Hat Luffy...' Jinbe's deep voice carries across the waves.\n"
        "'These waters need your strength.' He explains how he defended\n"
        "refugees from pirate raiders, now stranded on a besieged island.\n",

        "Luffy's sandals hit the railing. 'HEY! New friends need saving!'\n"
        "But as they turn toward the island, the sea BOILS - an ancient\n"
        "sea king rises, its maw wide enough to swallow ships whole.\n",

        "The only way forward? Answer the guardian's riddle correctly.\n"  

        "A thunderous voice echoes: 'ANSWER AND PROVE YOUR WORTH:\n"
        "\"I am always hungry, must always be fed.\n"
        "The finger I touch will soon turn red.\"\n"
        "What am I?'"
    },
    {
        "Fire",
        "Blood",
        "The Sun",
        "A Curse"
    },
    {25, 1, 1, 1}
    };

    storyMap[25] = {
    "Kraken.jpg",
    {
        "The ancient kraken's bioluminescent eyes FLARE green - a\n"
        "rumbling PURRS through the water as its massive tentacles\n"
        "retract. The path ahead clears, waves calming unnaturally.\n",

        "Jinbe bows deeply toward the depths. 'The sea remembers\n"
        "kindness.' The Sunny surges forward, the besieged island\n"
        "now visible - smoke rising from makeshift refugee tents,\n"
        "surrounded by a ring of enemy ships..."
    },
    {},
    {26}
    };

    storyMap[26] = {
    "JinBayKraken.jpg",
    {
        "Once on the island, the crew faces off against the Kraken Pirates in a\n"
        "fierce battle. With Jinbe's help, the Straw Hats defeat the pirates\n"
        "and rescue the trapped sailors.\n",

        "Jinbe nods approvingly. 'You fight with both heart and wisdom.\n"
        "I'll sail with you.' The mighty Whale Shark fishman officially joins\n"
        "as the Straw Hats' helmsman, his broad frame steady at the wheel.\n",

        "The Thousand Sunny sails onward, its crew now complete and ready\n"
        "for whatever adventures the Grand Line may bring!"
    },
    {},
    {27}
    };

    storyMap[27] = {
    "End.jpg",
    {
        "Luffy, with your help, has finally assembled his perfect crew:\n"
        "- Nami, the brilliant navigator\n"
        "- Zoro, the three-sword slayer\n"
        "- Sanji, the kick-happy chef\n"
        "- Chopper, the miracle doctor\n"
        "- Usopp, the sniper king\n"
        "- Robin, the history-seeking archaeologist\n"
        "- Brook, the bone-rattling musician\n"
        "- Jinbe, the steadfast helmsman\n"
        "- Franky, the SUUUPER shipwright\n\n",

        "Together they form the Straw Hat Pirates - each member vital,\n"
        "each dream burning bright. With your guidance, they've overcome\n"
        "every challenge...",

        "CONGRATULATIONS!\n"
        "You've helped build the crew that will conquer the Grand Line!\n"
        "Their sails billow toward the ultimate treasure: the ONE PIECE!"
    },
    {},
    {28}
    };
    storyMap[28] = {
    "End.jpg",
    {""},
    {},
    {}
    };
}

bool Level3::checkRiddle(int choiceIndex) {
        // Handle special cases (questions with correct and wrong answer)
        if (currentNode == 10 && storyMap[currentNode].choices[choiceIndex] != "An Echo") {
            return false;  //incorrect
        }
        else if (currentNode == 10 && storyMap[currentNode].choices[choiceIndex] == "An Echo") {
            return true;  // correct
        }
        if (currentNode == 14 && storyMap[currentNode].choices[choiceIndex] != "SALT") {
            return false;// Incorrect answer
        }
        else if (currentNode == 14 && storyMap[currentNode].choices[choiceIndex] == "SALT") {
            return true;// correct answer
        }
        if (currentNode == 18 && storyMap[currentNode].choices[choiceIndex] != "CHARGE!") {
            return false;// Incorrect answer
        }
        else if (currentNode == 18 && storyMap[currentNode].choices[choiceIndex] == "CHARGE!") {
            return true; // correct answer
        }
        if (currentNode == 22 && storyMap[currentNode].choices[choiceIndex] != "Steps") {
            return false;// Incorrect answer
        }
        else if (currentNode == 22 && storyMap[currentNode].choices[choiceIndex] == "Steps") {
            return true;// correct answer
        }
        if (currentNode == 24 && storyMap[currentNode].choices[choiceIndex] != "Fire") {
            return false;// Incorrect answer
        }
        else if (currentNode == 24 && storyMap[currentNode].choices[choiceIndex] == "Fire") {
            return true;// correct answer
        }
        return false;
}

void Level3::moral(int choiceIndex) {
    Feedback total;
    if (currentNode == 5 && storyMap[currentNode].choices[choiceIndex] == "Sail immediately to Thriller Bark") {
        Feedback f1("Your courage is admirable when choosing to sail immediately to Thriller Bark, \nbut rushing in blind can lead to disaster. A true captain balances bravery with preparation.", -2);
        total = total + f1;
    }
    if (currentNode == 5 && storyMap[currentNode].choices[choiceIndex] == "Ask Brook for Thriller Bark details") {
        Feedback f2("Knowledge is a powerful weapon. By asking Brook for details, \nyou gain the edge needed to navigate the dangers ahead", 5);
        total = total + f2;
    }
    if (currentNode == 5 && storyMap[currentNode].choices[choiceIndex] == "Refuse and leave Brook behind") {
        Feedback f3("You turned your back on someone who trusted you,\n    when you refused and left Brook behind. \nIn a world of pirates and dreams, loyalty is what keeps a crew together.", -5);
        total = total + f3;
    }
    if (currentNode == 11 && storyMap[currentNode].choices[choiceIndex] == "RETREAT!(Regroup at the gate)") {
        Feedback f4("You picked: RETREAT!(Regroup at the gate) \nSometimes, the only way forward is to stand and fight!", -5);
        total = total + f4;
    }
    if (currentNode == 11 && storyMap[currentNode].choices[choiceIndex] == "FIGHT! (Face the undead horde)") {
        Feedback f5("You picked: FIGHT! (Face the undead horde) \nAgainst fear and the unknown, true pirates raise their heads high.", 5);
        total = total + f5;
    }
    if (total.getMessage().length() != 0) {
        totalFeedback = totalFeedback + total;
    }
    storyMap[28] = {
           "",
           {"Feedback:\n " + totalFeedback.getMessage() + "\n Moral Score(EQ):\n" + std::to_string(totalFeedback.getMoraleBoost())},
           {},
           {}
    };
    //player->applyFeedback(total);
}