#include "Level1.h"
#include "TemplateClass.h"
#include "Feedback.h"

Level1::Level1() {
    // Initialize the story for Level 1
    totalRiddles = 3;
    storyMap[1] = {
        "paperBg.png",
        {"'Hi, I'm Monkey D Luffy and I'm going to be the King of Pirates!'"},
        {" Listen to Luffy's backstory:", "Skip backstory:"},
        {2,3}
    };

    storyMap[2] = {
    "BackStoryImage.jpg",
    {
        "'Luffy was born in Foosha Village to Monkey D. Dragon and an unknown\n"
        "woman. He was raised by his grandfather, Monkey D. Garp, who made\n"
        "him stronger through dangerous challenges. When he was young, he was\n"
        "inspired by the pirate 'Red-Haired Shanks'. He ate the Gum-Gum fruit,\n"
        "which gave him rubber-like abilities, and he stabbed himself below\n"
        "his eye to prove his toughness.\n",

        "He became a pirate after eating the Devil's Fruit, which grants powers\n"
        "at the cost of swimming. His dream is to find Gol D. Roger's\n"
        "legendary treasure and become the Pirate King for ultimate freedom.'"
    },
    {},
    {3}
    };

    storyMap[3] = {
     "Marine.jpg",
     {
         "Luffy, at 17, now leaves home in search of the One Piece.\n"
         "In order to become the King of Pirates, he needs a crew.\n"
         "He sets sail across the sea searching for those willing to\n"
         "join his quest. Days pass by before he finally spots land.\n",

         "It's a small island. As he gets closer, he realizes that this\n"
         "is a Navy base. A place where they imprison captured pirates.\n"
         "Luffy decides to search the island for any supplies he may\n"
         "need. He walks around the island, and he spots a man tied to\n"
         "a pole."
     },
     {
         "Ask Navy why this man was captured",
         "Ask the man why he was captured",
         "Leave him and look for supplies"
     },
     {4, 5, 6}
    };

    storyMap[4] = {
    "MarineBackGround.jpg",
    {
            // Narrator text
            "Luffy speaks to the guard about the man tied up. The guard alerts\n"
            "the Navy Base of a breach, and Luffy is captured. He is tied alongside\n"
            "the man, who he then speaks to.\n",
        "'Hi, I'm Monkey D. Luffy and I'm going to be the King of Pirates!'\n"
        "'I'm Zoro.'\n",
        "Luffy asks Zoro why he was captured.\n",
        "'I was wrongly accused of stealing from the Navy. They're going\n"
        "to leave us out here in the hot sun all day. If only I had my\n"
        "swords I could have gotten us out of here.'\n",
        "Luffy realizes Zoro is a swordsman - exactly what he needs for his crew.\n"
        "He asks where the swords are.\n",
        "'They took them away from me. They probably have them in the\n"
        "storage room where they keep all the pirate treasures.'\n",
        "Luffy uses his rubber powers to break his handcuffs and free himself."
    },
    {},
    {9}
    };

    storyMap[5] = {
    "MarineBackGroundWithCharacters.jpg",
    {
        "'Hi, I'm Monkey D. Luffy and I'm going to be the King of Pirates!'\n"
        "'I'm Zoro.'\n",

        "'Zoro, why were you captured?'\n"
        "'I was wrongly accused of stealing from the Navy. They're going\n"
        "to leave me out here in the hot sun all day.'\n",

        "'If only I had my swords I could have gotten out of here.'\n"
        "'Where is it?'\n",

        "'They took it away from me. They probably have it in the\n"
        "storage room where they keep all the pirate treasures.'\n",

        "He's a swordsman? Just what I need for my crew!\n"
        "'I can get them.'\n",

        "'Be careful not to get caught. You're my only hope.'"
    },
    {},
    {9}
    };

    storyMap[6] = {
        "MarineBackGround.jpg",
        {"Luffy searches the island and finds nothing of any value."},
        {"Ask Naivy why this man was captured", "Ask the man why he was captured"},
        {7,8}
    };

    storyMap[7] = {
    "Sailer.jpg",
    {
            "Luffy speaks to the guard about the man tied up. The guard alerts\n"
            "the Navy Base of a breach, and Luffy is captured. He is tied\n"
            "alongside the man, who he then speaks to.\n",

        "'Hi, I'm Monkey D. Luffy and I'm going to be the King of Pirates!'\n"
        "'I'm Zoro.'\n",

        "'Zoro, why were you captured?'\n"
        "'I was wrongly accused of stealing from the Navy. They're going\n"
        "to leave us out here in the hot sun all day.'\n",

        "'If only I had my swords I could have gotten us out of here.'\n"
        "'He's a swordsman? Just what I need for my crew!'\n",

        "'Where are they?'\n"
        "'They took them away from me. They probably have them in the\n"
        "storage room where they keep all pirate treasures.'\n",

        "Luffy uses his rubber powers to break his handcuffs and free himself."
    },
    {},
    {9}
    };

    storyMap[8] = {
    "MarineBackGroundWithCharacters.jpg",
    {
            "'Hi, I'm Monkey D. Luffy and I'm going to be the King of Pirates!'\n"
            "'I'm Zoro.'\n",
        "'Zoro, why were you captured?'\n"
        "'I was wrongly accused of stealing from the Navy. They're going\n"
        "to leave me out here in the hot sun all day.'\n",
        "'If only I had my swords I could have gotten out of here.'\n"
        "'Where is it?'\n",
        "'They took it away from me. They probably have it in the\n"
        "storage room where they keep all the pirate treasures.'\n",
        "He's a swordsman? Just what I need for my crew!\n"
        "'I can get them.'\n",
        "'Be careful not to get caught. You're my only hope.'"
    },
    {},
    {9}
    };

    storyMap[9] = {
    "MarineBackGround.jpg",
    {
        "Luffy goes to the base, as he approaches the storage room,\n"
        "he sees it's heavily guarded."
    },
    {
        "Pretend to be a Navy and go through the main entrance",
        "Sneak in through the side"
    },
    {10, 13}
    };

    storyMap[10] = {
    "MarineBackGround.jpg",
    {
        "He gets closer to the storage room and the guards see him.\n"
        "'Hey! I haven't seen you before, who are you?'\n",

        "'Hi, I'm Monkey D. Luffy and I'm going to be the King of Pirates!'\n"
        "The guard's eyes widen and he yells for backup.\n",

        "'Great! A challenge!' Luffy says.\n"
        "The guards begin firing at him."
    },
    {
        "Dodge the bullets.",
        "Use Gum-Gum Balloon."
    },
    {11, 12}
    };

    storyMap[11] = {
    "",
    {
        "Luffy jumps high and the Marines hit each other with their bullets.\n"
        "Luffy continues searching and finds the storeroom."
    },
    {},
    {13}
    };

    storyMap[12] = {
     "MarineBackGround.jpg",
     {
         "The bullets bounce off his rubber skin and hit the guards,\n"
         "and they fall to the ground.\n",

         "'I thought this was going to be a challenge.' But this\n"
         "decreases Luffy's stamina. Luffy is searching for a\n"
         "storeroom and he finds it."
     },
     {},
     {13}
    };

    storyMap[13] = {
    "Riddle.jpg",
    {
        "'Luffy sneaks in through the side entrance. There are no\n"
        "guards in sight, but there is a padlock.'\n",

        "Here a riddle, solve it to help Luffy unlock the padlock.\n"
        "The sum of my first two digits is 8, the sum of my second\n"
        "and third digits are ten and they differ by 2. The difference\n"
        "between the last 2 digits is 1."
    },
    {
        "3556",
        "4465",
        "1732",
        "8221"
    },
    {14,14,14,14}
    };

    storyMap[14] = {
    "RiddleRight.jpg",
    {
        "The door unlocks quietly.\n"
        "He goes inside and finds the room filled with more jewels\n"
        "than he's seen before. He snaps out of his amazement and\n"
        "finds the swords.\n",

        "He grabs them and whatever else he can fit in his hands and\n"
        "goes to Zoro. He cuts the rope and sets Zoro free. They both\n"
        "run back to Luffy's boat before anyone notices anything.\n",

        "'Thank you for getting me out of there.'\n"
        "'No problem!'\n",

        "'So? What's your plan to become the King of Pirates?'\n"
        "'I'm going to look for the legendary One Piece but first I\n"
        "need a crew. Would you like to join me?'\n",

        "'Well, every king needs a swordsman,' Zoro says as he waves\n"
        "around his sword at lightning speed.\n",

        "Luffy and Zoro search the seas for a ship fit for a King\n"
        "and his crew. Luffy tells Zoro about his dream and how\n"
        "inspired he always was by the Red-Haired Pirates.\n",

        "That's when he remembers Syrup Island! That's where Yasopp,\n"
        "a member of the Red-Haired Pirates, is from.\n",

        "They use an old map Luffy had stolen from the Navy Base to\n"
        "take them to the Island. After getting lost multiple times,\n"
        "they finally reach the Island.\n",

        "As they get off their boat they see the outline of many\n"
        "people in the distance. As they get closer a voice calls out.\n",

        "'Stop right there! Or else my 1000-man army will rip you to\n"
        "shreds!'\n",

        "'Something feels off Zoro,' Luffy says. 'Look at their\n"
        "shadows, they're so still.'"
    },
    {
        "Fight the 1000 people.",
        "Talk to the leader."
    },
    {15, 16}
    };

    storyMap[15] = {
    "MarineBackGround.jpg",
    {
        "They decide to fight the army, but just as they're about to\n"
        "fight, they see that the 'people' are just cardboard cutouts,\n"
        "being held up by a bunch of kids.\n",

        "'What's going on?' Luffy says confused. 'Where's the fight I\n"
        "was promised?'\n",

        "'Please don't hurt us,' the little kids say.\n"
        "Come on, let's go talk to the leader."
    },
    {},
    {16}
    };

    storyMap[16] = {
     "MeetUssop.jpg",
     {
         "'Hi, I'm Monkey D. Luffy and I'm going to be the King of Pirates!'\n"
         "'I'm Zoro, the swordsman.'\n",

         "'I am Usopp. I am a Pirate too!' He says excited to meet real\n"
         "Pirates. Luffy realizes that this is Yasopp's son.\n",

         "'You don't look like a Pirate,' Zoro says sceptically. He points\n"
         "his sword at Usopp. 'Who are you?'\n",

         "'I-I am Usopp. I really want to be a Pirate,' he says scared.\n"
         "'Maybe then I would be able to steal a cure to heal my friend, Kaya.'\n",

         "'What happened to her?' Luffy asks concerned.\n"
         "'Let me take you to her,' says Usopp.\n",

         "Luffy follows Usopp and Zoro stays behind to watch their small boat.\n"
         "Usopp takes Luffy to a big house. It's clear to see that Kaya is rich.\n",

         "Usopp tells Luffy that Kaya's parents were killed, and she lives\n"
         "alone with the servants who take care of her. She is very sick and\n"
         "cannot even get out of bed. They get to her room.\n",

         "'Kaya, I'd like you to meet my Pirate friend, Monkey D. Luffy. We've\n"
         "been on many adventures together!' Usopp lies to her. Luffy doesn't\n"
         "correct him.\n",

         "'Hi, Kaya.' Luffy says. 'Are you okay? What happened?' The concern\n"
         "is clear in his voice.\n",

         "'My parents... th-they were killed in front of me. I-I don't remember\n"
         "who. All I remember was seeing their lifeless bodies covered in blood\n"
         "and then... nothing. The next thing I remember was waking up here,\n"
         "feeling too weak to walk and no memory of what happened.' She's\n"
         "shaking and holds back the tears threatening to spill over.\n",

         "'I'm so sorry,' Luffy says.\n"
         "'Can you give us a moment?' Usopp asks Luffy."
     },
     {},
     {17}
    };

    storyMap[17] = {
    "UssopBackGround.jpg",
    {
        "Luffy walks out of the room. While he's waiting outside, the\n"
        "smell of food hits him. He follows the delicious aroma and sees\n"
        "a man - the one preparing the food. He's talking to someone on\n"
        "the phone.\n",

        "'Yes. I will kill her tonight,' the man says.\n"
        "He waits for a reply before saying, 'Her treasures are here,\n"
        "there's nothing guarding it. I can take it. No one will know\n"
        "anything until it's too late.'\n",

        "Luffy realizes that this servant is planning on killing Kaya.\n"
        "What should he do?"
    },
    {
        "Tell Kaya about the servant",
        "Tell Usopp about the servant's plan",
        "Confront the servant"
    },
    {18, 19, 20}
    };

    storyMap[18] = {
    "UssopBackground.jpg",
    {
        "Luffy walks back into the room.\n"
        "'Kaya... this servant of yours. He isn't what you think he is.\n"
        "He's planning on killing you tonight.'\n",

        "'What!' Usopp and Kaya say in unison.\n"
        "'NO! I don't believe you. He's been taking care of me this\n"
        "entire time! Why would he- why would he do that?'\n",

        "'I'm so sorry. He just wants your riches.'\n"
        "Kaya breaks down in tears and Usopp looks at her helplessly.\n",

        "'I-I can't breathe,' Kaya says.\n"
        "'What's happening?' Luffy asks worriedly. 'No! Kaya, please stay\n"
        "with me,' Usopp says with tears in his own eyes.\n",

        "Kaya has fallen unconscious. Usopp stays by her side taking care\n"
        "of her. Luffy decides to talk to the servant."
    },
    {},
    {20}
    };

    storyMap[19] = {
    "UssopBackground.jpg",
    {
        "Luffy walks back into the room.\n"
        "'Usopp, can I speak to you alone?'\n"
        "Usopp follows Luffy out of the room. He tells Usopp the servant's\n"
        "plans and Usopp is enraged.\n",

        "'He needs to be stopped before it's too late,' Luffy says.\n"
        "'Oh, he will be. Let's go.'\n",

        "They find the servant still in the kitchen preparing the food.\n"
        "'We know about your plan,' Usopp says. 'Did you really think\n"
        "you'd get away with it?'\n",

        "'Wait-,' the servant says with panic in his eyes.\n"
        "Before he can respond, Usopp takes swift action, and the servant\n"
        "crumples to the ground.\n",

        "Usopp realizes what he's done. 'Oh no! What was I thinking, what\n"
        "do I tell Kaya?'\n",

        "'We have to tell her the truth,' Luffy says.\n"
        "As they're about to go tell her, Zoro runs into the castle.\n",

        "'Luffy, we have a problem! There are pirates coming and they\n"
        "don't look friendly.'\n"
        "'They're coming for Kaya,' Usopp says.\n",

        "Luffy speaks to Usopp and Zoro and they come up with a plan.\n"
        "They find a spot between two trees where they can see the pirates\n"
        "coming. Soon, Zoro spots them and as they get closer, they prepare\n"
        "for attack.\n",

        "Luffy uses his abilities that the Gum-Gum fruit gave him by\n"
        "wrapping his legs around the two trees.\n",

        "Help Usopp aim Luffy's fist at the ship. What is the size of the\n"
        "angle he needs to aim for?"
    },
    {
        "18",
        "36",
        "50"
    },
    {26,21,26}
    };

    storyMap[26] = { "UssopBackground.jpg",
        {"Incorrect!"
         "Help Usopp aim Luffy's fist at the ship. What is the size of the\n"
        "angle he needs to aim for?"},
        {"18",
        "36",
        "50"},
    {26,21,26} };

    storyMap[20] = {
    "UssopBackground.jpg",
    {
        "Luffy walks into the kitchen. 'I heard what you said. About\n"
        "killing Kaya.' Luffy says angrily. 'I won't let you hurt her.'\n",

        "The servant is shocked. 'You don't understand.' He pleads.\n"
        "'Then explain it to me.'\n",

        "'Captain Kuro has my family. He'll hurt them if I don't get him\n"
        "what he wants.'\n",

        "'Let me help you.'\n"
        "'How? He'll be here soon.'\n"
        "'Don't worry.'\n",

        "Luffy speaks to Usopp and Zoro and they come up with a plan.\n"
        "They find a spot between two trees where they can see the pirates\n"
        "coming. Soon, Zoro spots them and as they get closer, they prepare\n"
        "for attack."
    },
    {},
    {19}
    };

    storyMap[21] = {
    "HappyUssop.jpg",
    {
        "'We did it!' Usopp says. 'I need to tell Kaya.'\n"
        "They all explain what happened to Kaya, and she's truly shocked\n"
        "but so grateful to the three of them.\n",

        "'Thank you so much. How could I ever repay you?' she asks.\n"
        "'You don't have to. We wanted to help,' Luffy says.\n",

        "'Nonsense. I will gift you my dad's old ship. He would have\n"
        "wanted you kind people to have it. I know he would.'\n",

        "'Thank you, Kaya. That's very generous of you.'\n"
        "'You saved my life and my servant's and his family.'\n",

        "They all share a moment of gratefulness for each other before\n"
        "Luffy and Zoro decide to leave.\n",

        "'Before we go, I'd like you to join our crew. We could really\n"
        "use a sniper,' Luffy tells Usopp.\n",

        "Usopp can barely contain his excitement but then he looks at Kaya.\n"
        "'Go, silly. I'll be fine over here. Go live your dream. I'll\n"
        "always be here, waiting for you to return home.'\n",

        "'I'm in,' Usopp says.\n",

        "The three crew members continue on their journey, searching for\n"
        "other pirates willing to join them, supplies and the poneglyphs,\n"
        "which will lead them to find the One Piece.\n",

        "'I can't believe I'm on a pirate ship with pirates and I'm part\n"
        "of the crew!' Usopp says. 'Our very own pirate crew, but what's\n"
        "the name of our crew?'"
    },
    {
        "The Straw Hat Pirates",
        "The Devil's Fruit",
        "Gum-Gum Crew",
        "Luffy's Crew",
        "Jake and the Neverland Pirates"
    },
    {22,25,25,25,25}
    };
    storyMap[25] = { "UssopBackground.jpg",{"'Hmm, I don't know.' Usopp looks at Luffy's hat \nOh, how about Straw Hat Pirates? \nThe crew agrees."},
        {}, {22} };
    storyMap[22] = {
    "UssopBackground.jpg",
    {
        "As Usopp talks, Luffy is distracted as he watches a girl a\n"
        "little older than him sneak onto a ship passing by, without any\n"
        "of their crew members noticing. He watches how quiet and stealthy\n"
        "she is.\n",

        "She disappears from sight and when she returns she has food and\n"
        "jewels with her. He is so amazed by her and decides that he would\n"
        "love her to be part of the crew.\n",

        "'Hi!' he yells out to her.\n"
        "The other pirates hear him and see her on their ship. They try\n"
        "to catch her but she moves too fast for them to get her.\n",

        "Luffy reaches for her with his hand and she takes it. When the\n"
        "pirates realize that Luffy has these abilities they back off\n"
        "and let them be.\n",

        "'You almost got me killed,' the girl accuses.\n"
        "'I would have never let that happen,' Luffy says. 'I'm Monkey D.\n"
        "Luffy. I'm going to be the King of Pirates. I was just amazed\n"
        "by how quiet and stealthy you were.'\n",

        "'Thank you,' Nami says looking around the ship. 'Would you happen\n"
        "to have room for one more?'\n",

        "'Yes, we would love to have you on our crew.'\n"
        "'Great!'"
    },
    {},
    {23}
    };
    //Sanji picture
    storyMap[23] = {
        "Sanji.jpg",
        {"Congratulations you have finished the first chapter \n"
         "You have won a new crew member: Sanji(Cook)"},
        {},
        {24}
    };

    storyMap[24] = {
    "EndOne.jpg",
    {""},
    {},
    {}
    };



    currentNode = 1; // Start the game at the first story node
}

bool Level1::checkRiddle(int choiceIndex) {
    // Handle special cases (riddles)
    if (currentNode == 13 && storyMap[currentNode].choices[choiceIndex] != "4465") {
        return false;  // Incorrect answer
    }
    else if (currentNode == 13 && storyMap[currentNode].choices[choiceIndex] == "4465") {
        return true;  // correct answer
    }
    if (currentNode == 19 && storyMap[currentNode].choices[choiceIndex] != "36") {
        return false;  // Incorrect answer
    }
    else if (currentNode == 19 && storyMap[currentNode].choices[choiceIndex] == "36") {
        return true;  // correct answer
    }
    if (currentNode == 21 && storyMap[currentNode].choices[choiceIndex] != "The Straw Hat Pirates") {
        return false;  // Incorrect answer
    }
    else if (currentNode == 21 && storyMap[currentNode].choices[choiceIndex] == "The Straw Hat Pirates") {
        return true;  // correct answer
    }

    return false; 
}

void Level1::moral(int choiceIndex) { //Varu
    if (choiceIndex < 0) {
        return;
    }
    else {
        Feedback total;
        if (currentNode == 3 && storyMap[currentNode].choices[choiceIndex] == "Leave him and look for supplies") {
            Feedback f1("You ignored someone in need.\n", -5);
            total = total + f1;
            std::cout << "moral1: " << total.getMoraleBoost() << std::endl;
        }
        if (currentNode == 14 && storyMap[currentNode].choices[choiceIndex] == "Fight the 1000 people.") {
            Feedback f2("You charge in without hesitation, using violence as your default\n ", -5);
            total = total + f2;
            std::cout << "moral2: " << total.getMoraleBoost() << std::endl;
        }
        if (currentNode == 14 && storyMap[currentNode].choices[choiceIndex] == "Talk to the leader.") {
            Feedback f3("You kept your cool by talking Usopp.Your level-headness earns you respect.\n", 5);
            total = total + f3;
            std::cout << "moral3: " << total.getMoraleBoost() << std::endl;

        }
        totalFeedback = totalFeedback + total;
        std::cout << totalFeedback.getMoraleBoost() << std::endl;
        storyMap[24] = {
            "introChapterTwo.jpg",
            {"Feedback:\n " + totalFeedback.getMessage() + "\n Moral Score(EQ):\n" + std::to_string(totalFeedback.getMoraleBoost())+"/5"},
            {},
            {}
        };
        //player->applyFeedback(total);
    }

}