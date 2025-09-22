#include "Level2.h"
#include "Feedback.h"



Level2::Level2() {
    totalRiddles = 14;

    storyMap[1] = {
    "Ship.jpg",
    {
        "They spend the rest of the day trading stories. They all loved\n"
        "Usopp's stories the most, even though they knew they most likely\n"
        "weren't true.\n",

        "The next morning, when Luffy gets up, he hears them talking in a\n"
        "panicked whisper.\n",

        "'What's going on, guys?' he asks.\n"
        "'It's Nami. She's gone... And so is our treasure,' Zoro says.\n",

        "'Should we go after her?' Usopp asks.\n"
        "'She stole our treasure! What do you think, Luffy?' says Zoro."

       
    },
    {
        "Go after Nami",
        "Continue the journey"
    },
    {2, 3}
};

   storyMap[2] = {
    "nami.jpg",
    {
        "'I think we should go after her. We can get our things back.'\n"
        "'But we don't even know where she went,' Usopp realizes.\n",

        "'She left some things behind. Maybe there's a clue there.'\n"
        "They go through the pages she left behind and discover a\n"
        "detailed hand-drawn map.\n",

        "On it, there's an island close by labelled 'Home'.\n"
        "They use this map to get to the island."
    },
    {},
    {4}
};

    storyMap[3] = {
    "Nami.jpg",
    {
        "'Maybe we should continue without her,' Luffy says and the\n"
        "rest of the team agrees. They continue on with their journey.\n",

        "When they see a huge storm coming, Usopp warns:\n"
        "'Luffy, the storm looks really bad. We need to find an island.'\n",

        "'Okay, let's look at the map to find the closest island.'\n"
        "They look at the map and see symbols with a key next to it.\n",

        "The key has weird words next to it, and they realize the words\n"
        "are mixed up to make it hard to read."
    },
    {},
    {4}
};

    storyMap[4] = {
    "think.jpg",
    {
        "Unjumble the following sentence to help Luffy figure out the key\n"
        "before the storm comes (timed question):\n",
        
        "'Apws strif dan dirth treelet fo chea drow ni het yek enth awps\n"
        "eht trisf nda stal ot petcryd yke.'"
    },
    {
        "Paws first dan third tree left to reach. Drown in the tenth,\n"
        "pause. I had first and last too petrified luck.",
        
     
        
        "\n\nSwap the first and third letter of each word in the key then\n"
        "swap the first letter and last letter to decrypt the Key."
    },
    {5, 5}
};

    storyMap[5] = {
    "namiIsland.jpg",
    {
        "They use this clue to decrypt the map. By this time, the wind\n"
        "has picked up and signs of a heavy storm become clear.\n",

        "They decide to go to the closest island, which happens to be\n"
        "Nami's home island. They dock the ship and look around for Nami.\n",

        "They ask the local people, and most ignore them the moment they\n"
        "mention Nami, until finally an older man tells them:\n",

        "'So you're friends of that traitor?' the man asks.\n"
        "'Traitor?' Luffy asks.\n",

        "'So she hasn't told you. Well, she's at her farm house over there.'\n"
        "He points in the direction it is.\n",

        "'Follow the signs. It will be very obvious. I won't make it easy\n"
        "by telling you. It's on her to tell you her betrayal.'"
    },
    {},
    {6}
};


    storyMap[6] = {
    "NamiIsland.jpg",
    {
        "They follow the signs: 'Do not enter', 'Traitors land', 'Traitors\n"
        "house this way', 'Betrayer of her people', until they reach a farm\n"
        "with a little house in the distance.\n",

        "They see someone in the field on their knees digging in the dirt.\n"
        "As they get closer, they see that it's Nami.\n",

        "'Nami?' Luffy asks. She turns around. 'What are you doing here?'\n"
        "she asks, afraid.\n",

        "'What's going on? Why did you steal from us? Why are these people\n"
        "calling you a traitor?' Luffy asks.\n",

        "'You won't understand,' she says.\n"
        "'We don't understand now. Explain to us before things escalate.\n"
        "We're worried about you and we came for our gold,' Luffy says.\n",

        "She sighs. 'This is my home. Those villagers, they're my people.\n"
        "We didn't have a lot but we were happy, but then the Fishmen came.\n"
        "They ran from those who gained control of their home. When they saw\n"
        "us humans, they grew angrier.\n",

        "They forced my people to pay them 5 jewels every day for every life.\n"
        "Not all could afford it so they killed people, my mum...' She takes\n"
        "a moment to gather her strength.\n",

        "'They realized I was good with maps so they took me, marked me as\n"
        "theirs,' she says, showing them the Fishmen tattoo on her arm.\n"
        "'When my people saw this they were enraged. They were starving\n"
        "while I lived better than them.\n",

        "The Fishmen made a deal: if I could give them 1 billion jewels,\n"
        "they'd set my people free. So I've been saving in secret, hiding\n"
        "it out here.' She points to the hole filled with money and jewels,\n"
        "some stained with blood from her thefts.\n",

        "'I finally have enough to save my people. I won't let anyone get\n"
        "in my way,' she tells them.\n",

        "'I'm sorry you had to go through this, Nami. It takes strength to\n"
        "do this alone, but you're not alone anymore. Don't give them the\n"
        "jewels. Let us help defeat them instead,' Luffy says.\n",

        "'No! I trust them. If I break the deal, they'll kill everyone I've\n"
        "ever known. Please stay out of my way,' Nami cries.\n",

        "They let her go, not wanting to interfere. 'What do we do now?'\n"
        "Usopp asks. 'We let her go.' They return to the ship to gather\n"
        "supplies and wait out the storm.\n",

        "While sorting supplies, they hear rustling. Nami comes running with\n"
        "tears in her eyes and blood on her arm.\n",

        "'What happened?' Luffy asks, worried. 'You were right! They took\n"
        "the jewels and lied! My people will never be free!' she cries.\n",

        "After comforting her, Luffy instructs Zoro and Usopp to prepare.\n"
        "'What're you going to do? They're too strong!' Nami says.\n",

        "'Don't worry,' Luffy tells her. He places his hat on her head.\n"
        "'Keep this. I'll be back for it.'"
    },
    {},
    {7}
};


    storyMap[7] = {
    "namiIsland.jpg",
    {
        "Luffy, Zoro and Usopp confront the Fishmen leader.\n"
        "'And who are these fools?' the Fishmen leader asks.\n",

        "'We are the Straw Hat Pirates,' Usopp says.\n"
        "'I will make you pay for hurting Nami,' Luffy says.\n",

        "Luffy uses his Gum-Gum Pistol to punch the leader, but he dodges it.\n"
        "The Fishmen fire bullets that bounce off Luffy's chest, injuring many.\n",

        "Usopp and Zoro draw their weapons and begin the battle.\n"
        "The leader realizes Luffy has Devil Fruit powers and gets an idea.\n",

        "Instead of fighting, the leader jumps into the sea.\n"
        "Luffy follows him while thinking of what he should do."
    },
    {
        "Call Zoro",
        "Go into the water",
        "Wear a swimming costume and go into the water"
    },
    {8, 10, 9}
};


    storyMap[8] = {
    "NamiIsland.jpg",
    {
        "He yells out for Zoro but he doesn't hear him. Just as he's about\n"
        "to yell again, the Fishmen leader sneaks behind him and pulls him in."
    },
    {},
    {7}
};

    storyMap[9] = {
    "WaterLuffy.jpg",
    {
        "He puts on a costume and follows the leader into the water.\n"
        "The Fishman leader starts beating him up and the costume gets ripped off."
    },
    {},
    {7}
};


    storyMap[10] = {
    "WaterLuffy.jpg",
    {
        "He starts drowning. That's when he remembers his Devil Fruit weakness - \n"
        "he can't swim in water. The leader leaves him to drown.\n",

        "Luffy realizes this may be the end and closes his eyes. He feels hands\n"
        "pulling at him and is dragged out of the water. He opens his eyes to\n"
        "see Zoro and a Fishman standing over him.\n",

        "'Is he one of our guests as well?' the Fishman asks Zoro.\n"
        "'Yes,' Zoro answers.\n",

        "'How dare you, Hatchi?!' the leader yells at the Fishman Hatchi who\n"
        "saved Luffy. 'I will finish you!'\n",

        "The Fishman leader charges towards Hatchi and lands a blow on his chest,\n"
        "but Hatchi, with his eight arms, is faster.\n",

        "'Enough of this! Why are you hitting me, Captain? I thought we were\n"
        "brothers!' Hatchi says. He pushes him back but the leader charges again.\n",

        "Hatchi and the leader battle. Hatchi is faster but the leader is stronger.\n"
        "This angers Luffy who asks: 'Why are you hitting your own man? You're\n"
        "supposed to protect Hatchi as leader!'\n",

        "'None of your business! He betrayed me by helping my enemies - he's a\n"
        "traitor!' the leader says.\n",

        "'Stop!! You're killing him!' Luffy screams. Then he comes up with a way\n"
        "to defeat the Fishman leader."
    },
    {
        "Close the Leader's eyes",
        "Cover his gills with plastic", 
        "Roast him, since he's a fish"
    },
    {11, 12, 13}
};

    storyMap[11] = {
    "WaterLuffy.jpg",
    {
        "Luffy covers the leader's eyes, but he pushes him off,\n"
        "injuring him in the process. (Try again)"
    },
    {},
    {10}
};

    storyMap[12] = {
    "GumGum.jpg",
    {
        "Zoro and Usopp grab plastic and wrap it around the leader. Since he\n"
        "can't breathe with his gills covered, he shouts while gasping for air.\n"
        "'No! Stop!'\n",

        "Luffy uses his Gum-Gum Pistol, but the leader's skin feels hard like\n"
        "steel. He realizes he needs power to penetrate his skin - he needs to\n"
        "use Haki!\n",

        "Suddenly, Luffy feels something change within him.\n"
        "WARNING: GEAR ONE ACCESSED. ANSWER CORRECTLY TO ACTIVATE.\n"
        "What is the Devil Fruit that gave Luffy his rubber abilities?"
    },
    {
        "The Rubber Ball",
        "Strechy Strechy Fruit",
        "Gum-Gum Fruit"
    },
    {14, 14, 15}
};

    storyMap[13] = {
    "WaterLuffy",
    {
        "Usopp tries to push him into the fire but he doesn't budge.\n"
        "'We need to weaken him,' Luffy says. 'Grab the plastic!'"
    },
    {},
    {12}
};


    storyMap[14] = {
    "WaterLuffy",
    {
        "Incorrect. Try again."
    },
    {},
    {12}
};


    storyMap[15] = {
    "GumGum.jpg",
    {
        "HAKI ACTIVATED. 'This is for Nami! GUM-GUM... PISTOL!!!'\n"
        "Luffy's fist speeds toward the leader like a bullet,\n"
        "piercing through his steel-like skin."
    },
    {},
    {17}
};


    storyMap[17] = {
    "NamiIsland.jpg",
    {
        "The leader finally falls to the ground, defeated. The other Fishmen\n"
        "see this and surrender.\n",

        "'You will not harm the villagers anymore. You will live in peace in\n"
        "your own parts of the land. Return what you've stolen or answer to\n"
        "the Straw Hat Pirates,' Luffy says filled with rage.\n",

        "Hatchi steps up and offers his hand. They shake. 'We will. I'll make\n"
        "sure of it,' Hatchi says.\n",

        "The villagers learn about Nami's sacrifice. After years of hating her,\n"
        "they realize she fought a silent battle to save them. They apologize\n"
        "and welcome her back.\n",

        "The Fishmen return stolen property. They give Nami back her jewels.\n"
        "She returns what she stole to Luffy and shares the rest with her village.\n",

        "While distributing jewels, Luffy discovers a poneglyph. 'Nami,' he\n"
        "says in disbelief. 'You stole a poneglyph?'\n",

        "'What is that?' she asks.\n"
        "'It's the key to finding the One Piece,' Luffy explains.\n",

        "'Keep it. I'll always support your dream of becoming Pirate King.\n"
        "Consider it thanks for saving my village,' Nami smiles.\n",

        "'Thank you, Nami,' Luffy says.\n"
        "'No, thank YOU. I don't know what I'd have done without you.'\n",

        "'Nami, you never need to thank me. You're my friend and I'd do\n"
        "anything for you... Though I still need a navigator. If you really\n"
        "want to thank me, consider joining my crew?'\n",

        "'If there's any crew I'd join, it's yours. I'd love to be a\n"
        "Straw Hat Pirate,' Nami says.\n",

        "'Welcome to the Straw Hat Pirates!'"
    },
    {},
    {18}
};


    storyMap[18] = {
    "Ship.jpg",
    {
        "The adventure to find the One Piece and become the Pirate King\n"
        "continues! With Nami now part of the crew, they sail the seas,\n"
        "searching for someone who can decipher the poneglyph.\n",

        "They scour various islands with no success, but the Straw Hats\n"
        "never give up on their quest."
    },
    {},
    {19}
};

    storyMap[19] = {
    "RobinIsland.jpg",
    {
        "After days of sailing, the Straw Hat crew arrives in Alabasta - a\n"
        "desert kingdom plagued by Baroque Works. Their goal: find the\n"
        "Poneglyph, but the powerful Crocodile stands in their way.\n",

        "Sanji gathers intel and learns the Poneglyph is hidden deep within\n"
        "the Royal Tombs. Before they can reach it, Nico Robin appears.\n",

        "'You seek the Poneglyph?' she asks. 'Then prove your worth. Only\n"
        "those who understand the past can claim the future.'\n",

        "Robin presents a riddle to test their intelligence:\n"
        "'In the heart of the desert, I stand still, yet I move with time.\n"
        "I flow like water, but I am not wet. What am I?'"
    },
    {
        "A mirage",
        "Sand",
        "The wind",
        "A shadow"
    },
    {20, 21, 20, 20}
};

    storyMap[20] = {
    "Robin.jpg",
    {
        "Incorrect. Try again. Robin sighs.\n"
        "'If you can't answer this, how do you expect to read the Poneglyph?'\n",

        "'I have cities but no houses, forests but no trees,\n"
        "and rivers but no water. What am I?'"
    },
    {
        "A desert",
        "A mirage", 
        "A map",
        "A puzzle"
    },
    {22, 22, 21, 22}
};


    storyMap[21] = {
    "Robin.jpg",
    {
        "Robin smirks. 'You're starting to impress me. Let's move on.'\n"
        "She leads them to the Poneglyph's location.\n",

        "At the tomb entrance, Robin finds an ancient inscription. She\n"
        "translates it into a math puzzle:\n",

        "'The key to unlocking the tomb is hidden in these numbers:\n"
        "5, 8, 13, 21, 34... What is the next number in the sequence?'"
    },
    {
        "42",
        "47", 
        "55",
        "61"
    },
    {23, 23, 24, 23}
};


    storyMap[22] = {
    "Robin.jpg",
    {
        "Robin shakes her head. 'Your journey may end before it begins...'\n"
        "She poses another riddle:\n",

        "'I speak without a mouth and hear without ears.\n"
        "I am invisible, yet I leave words behind. What am I?'"
    },
    {
        "A ghost",
        "An echo",
        "The wind",
        "A book"
    },
    {22, 21, 22, 22}
};

    storyMap[23] = {
    "Robin.jpg",
    {
        "Robin frowns. 'The tomb remains sealed. Solve this, or stay\n"
        "locked out forever!'\n",

        "A secret code is formed by reversing a number and subtracting\n"
        "it from the original. If the number is 73, what is the result?"
    },
    {
        "27",
        "36",
        "46",
        "54"
    },
    {23, 24, 23, 23}
};


    storyMap[24] = {
    "Robin.jpg",
    {
        "Robin nods approvingly. 'You understand ancient wisdom. The\n"
        "way is open.'\n",

        "As they enter the tomb, Crocodile appears, blocking the path to\n"
        "the Poneglyph. 'Fools! This stone belongs to me! And Robin - how\n"
        "dare you let them in!' Crocodile shouts.\n",

        "'I'm tired of you! I'm tired of living! Just kill me if you must!'\n"
        "Robin exclaims.\n",

        "'What's going on, Robin? Who is this sand guy?' Luffy asks.\n",

        "'He's my boss. I've worked for him since I was young, after the\n"
        "Navy destroyed my home. I'm an archaeologist who could read\n"
        "Poneglyphs as a child - which was illegal. That's why they\n"
        "destroyed my island and killed my parents.'\n",

        "'What I know can disrupt the world - the Void Century secrets\n"
        "about ancient weapons are written on Poneglyphs. Crocodile,\n"
        "as a Warlord working with the Navy, has used my knowledge to\n"
        "prevent pirates from finding the One Piece.'\n",

        "'My whole life has been under their control. I never had a\n"
        "childhood - just traveling, doing their dirty work. I'm so tired,\n"
        "Luffy! That's why I helped you - to rebel! Just kill me!'\n"
        "Robin collapses crying.\n",

        "'STOP IT, ROBIN! You don't want to die! I'll save you - just say\n"
        "the word! You're my friend now!' Luffy declares.\n",

        "'Friend? I've never had a friend...' Robin whispers, then screams:\n"
        "'I WANT TO LIVE! I WANT TO BE FREE!'\n",

        "Luffy prepares to fight Crocodile, who charges furiously. Luffy\n"
        "uses Gear First: Pistol with Haki, but the sand Logia body\n"
        "reforms after impact.\n",

        "Luffy realizes Crocodile's Sand-Sand Fruit makes him intangible.\n"
        "Everything he touches turns to sand. Luffy must find a way to\n"
        "land a real hit while dodging his drying attacks.\n",

        "What should Luffy do to land a hit?"
    },
    {
        "Attack with pure strength",
        "Use a sword",
        "Punch with wet hands",
        "Try to grab him"
    },
    {25, 25, 26, 25}
};


    storyMap[25] = {
    "RobinIsland.jpg",
    {
        "Crocodile dodges effortlessly and counterattacks! Try again.\n"
        "His Sand-Sand Fruit drains moisture from anything he touches.\n"
        "If caught, Luffy will dehydrate completely and be unable to fight!\n",

        "What should Luffy do to counter Crocodile's dehydration ability?"
    },
    {
        "Dodge and counter with brute force",
        "Use a wet cloth to cover his hands", 
        "Attack with fire",
        "Try to fight in the open desert"
    },
    {25, 26, 25, 25}
};


    storyMap[26] = {
    "RobinIsland.jpg",
    {
        "Luffy smashes Crocodile with a water-enhanced punch, sending him\n"
        "flying! The Sand Warlord is finally defeated.\n",

        "After the battle, Robin examines the Poneglyph. It contains an\n"
        "encoded message:\n",

        "'To reach the One Piece, solve this:\n"
        "A number is doubled, then 10 is subtracted.\n"
        "The result is 14. What was the original number?'"
    },
    {
        "10",
        "12",
        "7",
        "8"
    },
    {27, 44, 27, 27}
};


    storyMap[27] = {
    "Think.jpg",
    {
        "(Incorrect, try again) The ancient scholar's formula remains:\n"
        "3X + 5 = 20. What is the value of X?"
    },
    {
        "5",
        "6",
        "7", 
        "8"
    },
    {44, 27, 27, 27}
};


    storyMap[44] = {
    "Robin.jpg",
    {
        "Robin's eyes widen as she deciphers the message, revealing a\n"
        "crucial clue about the Road Poneglyphs! The crew cheers - they're\n"
        "one step closer to Laugh Tale.\n",

        "Luffy grins wildly. 'Robin! Join my crew!'\n"
        "Tears stream down Robin's face as she finally finds where she\n"
        "belongs. 'Yes... I'd love to.'\n",

        "With Robin officially joining, the Straw Hats gain both an\n"
        "archaeologist and a new family member. Their adventure continues\n"
        "toward even greater horizons!"
    },
    {},
    {45}
};


    storyMap[45] = {
    "RobinC.jpg",
    {
        "CHAPTER 2 FINALE: THE LAST VOYAGE OF GOING MERRY\n"
        "The crew celebrates Robin joining, but their joy is cut short when\n"
        "the Going Merry begins creaking ominously. The ship that carried\n"
        "them so far is reaching its limit..."
    },
    {},
    {46}
};


   storyMap[46] = {
    "Ship.jpg",
    {
        "The Going Merry had carried the Straw Hats through countless\n"
        "adventures, raging storms and fierce battles. Now its hull creaks,\n"
        "wood splintering, mast barely holding under moonlit waves.\n",

        "A whisper echoes across the deck: 'I'm sorry... I tried my best...\n"
        "but I can't sail much longer.' The crew freezes - did Merry just speak?\n",

        "Luffy's fists clench. 'NO! We'll fix you, Merry!'\n"
        "Usopp's tears fall freely. 'Face it, Luffy... Merry's dying.'\n",

        "Even Zoro stands silent. Nami bites her lip. Chopper sniffles.\n"
        "Their first home at sea... is fading before them.\n",

        "Sanji lights a cigarette. 'Water 7 - city of shipwrights. If anyone\n"
        "can help...' The crew nods, setting course for one final voyage.\n",

        "Dawn reveals Water 7's marvels: canal streets, ship-gondolas,\n"
        "water trains roaring between islands. The air hums with salt,\n"
        "steel and a thousand hammers. 'If Merry can be saved,' Nami\n"
        "whispers, 'it's here.'\n",

        "But none suspect... Water 7 won't just test their ship -\n"
        "it will shatter their crew."
    },
    {},
    {47}
};


    storyMap[47] = {
    "FrankyIsland.jpg",
    {
        "The Straw Hats arrive in Water 7, the legendary shipwright city,\n"
        "desperate to save the Going Merry. But beneath the canals and\n"
        "workshops lies a deeper mystery - Franky, a cyborg shipwright\n"
        "who dreams of building the ultimate ship.\n",

        "Before meeting Franky, they must pass grueling challenges:\n"
        "riddles, strength tests, and a showdown with the Franky Family!\n",

        "At Galley-La Company, the foreman examines Merry's wounds,\n"
        "then tests the crew with a riddle before agreeing to help:\n",

        "'What sails across the sea but never drinks?\n"
        "Has a heart but no soul. What is it?'"
    },
    {
        "A compass",
        "A ship log", 
        "A figurehead",
        "A ship"
    },
    {48, 48, 48, 49}
};


    storyMap[48] = {
    "FrankyIsland.jpg",
    {
        "'If you don't understand ships, you shouldn't sail them!'\n"
        "The Galley-La shipwrights pose another riddle before examining\n"
        "the Going Merry:\n",

        "'I have hands but cannot clap,\n"
        "A face but cannot smile.\n"
        "I help you see the world,\n"
        "Yet I never blink. What am I?'"
    },
    {
        "A statue",
        "A clock",
        "A mirror", 
        "A mask"
    },
    {47, 49, 47, 47}
};


    storyMap[49] = {
    "FrankyIsland.jpg",
    {
        "The shipwright nods. 'You understand a ship's heart. Now...'\n"
        "His face darkens as he inspects Merry's damage. 'Iceburg! Get\n"
        "Franky - we need to scrap this immediately and build anew.'\n",

        "Turning to the crew, his voice softens. 'She's beyond repair.\n"
        "But my brother Franky... he can craft you a proper ship.'\n",

        "To find Franky, they decode an old railway blueprint missing\n"
        "critical numbers. A final test remains:\n",

        "'A Sea Train track spans 600 km. At 80 km/h,\n"
        "how long to reach the end?'"
    },
    {
        "6 hours",
        "7.5 hours",
        "8 hours",
        "9 hours"
    },
    {50, 54, 50, 50}
};


    storyMap[54] = {
    "FrankyIsland.jpg",
    {
        "Robin smirks. 'You read maps well, but it's actually 8 hours\n"
        "when including 30 minutes for stops. Now, let's follow the tracks.'\n",

        "The crew finds Franky, who explains solemnly: 'You must let Going\n"
        "Merry go. Her body is tired, but her soul will rest knowing her\n"
        "crew loved her truly. A ship's spirit never breaks.'\n",

        "As Franky shares his ship knowledge, Luffy gets excited. 'Join my\n"
        "crew!' Franky refuses, scoffing: 'Not until you prove yourselves\n"
        "against my Franky Family!' His loyal ship dismantlers crack their\n"
        "knuckles, ready for battle.\n",

        "How should the Straw Hats fight the Franky Family?"
    },
    {
        "Attack head-on with Luffy's brute strength",
        "Have Nami use her Clima-Tact to create storms",
        "Trick them into fighting each other",
        "Escape and avoid battle"
    },
    {50, 51, 50, 50}
};


    storyMap[50] = {
    "",
    {
        "Incorrect. Try again. Which tactic will truly help them win?"
    },
    {
        "Have Usopp use long-range sniping",
        "Ask Franky to call them off", 
        "Run away and regroup",
        "Let Luffy charge in blindly"
    },
    {51, 50, 50, 50}
};

    storyMap[51] = {
    "FrankyIsland.jpg",
    {
        "Nami's storm neutralizes the enemy explosives, letting the crew\n"
        "gain the upper hand! Franky nods approvingly but remains stubborn.\n",

        "'Strength ain't enough! Prove your pirate spirit with this:\n"
        "A ship's only as strong as its crew. If forced to choose...'\n",

        "'...would you save your ship that carries your dreams,\n"
        "or your crew who are the journey's heart?'"
    },
    {
        "The ship - it carries our dream",
        "The crew - they're the heart of our journey",
        "Neither - a true pirate finds another way",
        "It's meaningless if we don't fight together"
    },
    {51, 52, 51, 51}
};


    storyMap[52] = {
    "Franky.jpg",
    {
        "CONGRATULATIONS! YOU'VE SUCCESSFULLY COMPLETED CHAPTER 2!\n"
        "Franky wipes away tears. 'SUPER answer! That's the spirit\n"
        "I wanna sail with!'\n",

        "The crew cheers as Franky officially joins the Straw Hats.\n"
        "The Going Merry's spirit smiles from the sea as the crew\n"
        "prepares for their next adventure with their new shipwright!\n",

        "END OF CHAPTER 2: THE WATER 7 SAGA"
    },
    {},
    {53}
};
    storyMap[53] = {
    "Chopper.jpg", // Add Chopper pic OLWETHU
    {"You have won a new crew member: Tony Tony Chopper(Doctor)"},
    {},
    {}
    };

    currentNode = 1; // Start the game at the first story node 
}

bool Level2::checkRiddle(int choiceIndex) {
        // Handle special cases (incorrect and correct answers question)
        if (currentNode == 12 && storyMap[currentNode].choices[choiceIndex] != "Gum-Gum Fruit") {
            return false;  // incorrect answer
        }
        else if (currentNode == 12 && storyMap[currentNode].choices[choiceIndex] == "Gum-Gum Fruit") {
            return true;  // correct answer
        }
        if (currentNode == 19 && storyMap[currentNode].choices[choiceIndex] != "Sand") {
            return false;  // incorrect answer
        }
        else if (currentNode == 19 && storyMap[currentNode].choices[choiceIndex] == "Sand") {
            return true;  // correct answer
        }
        if (currentNode == 20 && storyMap[currentNode].choices[choiceIndex] != "A map") {
            return false;  // incorrect answer
        }
        else if (currentNode == 20 && storyMap[currentNode].choices[choiceIndex] == "A map") {
            return true;  // correct answer
        }
        if (currentNode == 21 && storyMap[currentNode].choices[choiceIndex] != "55") {
            return false;  // correct answer
        }
        else if (currentNode == 21 && storyMap[currentNode].choices[choiceIndex] == "55") {
            return true;  // correct answer
        }
        if (currentNode == 22 && storyMap[currentNode].choices[choiceIndex] != "An echo") {
            return false;  // incorrect answer
        }
        else if (currentNode == 22 && storyMap[currentNode].choices[choiceIndex] == "An echo") {
            return true;  // correct answer
        }
        if (currentNode == 23 && storyMap[currentNode].choices[choiceIndex] != "36") {
            return false;  // incorrect answer
        }
        else if (currentNode == 23 && storyMap[currentNode].choices[choiceIndex] == "36") {
            return true;  // correct answer
        }
        if (currentNode == 25 && storyMap[currentNode].choices[choiceIndex] != "Use a wet cloth to cover his hands") {
            return false;  // Correct answer
        }
        else if (currentNode == 25 && storyMap[currentNode].choices[choiceIndex] == "Use a wet cloth to cover his hands") {
            return true;  // correct answer
        }
        if (currentNode == 26 && storyMap[currentNode].choices[choiceIndex] != "12") {
            return false;  // incorrect answer
        }
        else if (currentNode == 26 && storyMap[currentNode].choices[choiceIndex] == "12") {
            return true;  // correct answer
        }
        if (currentNode == 27 && storyMap[currentNode].choices[choiceIndex] != "5") {
            return false;  // incorrect answer
        }
        else if (currentNode == 27 && storyMap[currentNode].choices[choiceIndex] == "5") {
            return true;  // correct answer
        }
        if (currentNode == 47 && storyMap[currentNode].choices[choiceIndex] != "A ship") {
            return false;  // incorrect answer
        }
        else if (currentNode == 47 && storyMap[currentNode].choices[choiceIndex] == "A ship") {
            return true;  // correct answer
        }
        if (currentNode == 48 && storyMap[currentNode].choices[choiceIndex] != "A clock") {
            return false;  // incorrect answer
        }
        else if (currentNode == 48 && storyMap[currentNode].choices[choiceIndex] == "A clock") {
            return true;  // correct answer
        }
        if (currentNode == 49 && storyMap[currentNode].choices[choiceIndex] != "7.5 hours") {
            return false;  // incorrect answer
        }
        else if (currentNode == 49 && storyMap[currentNode].choices[choiceIndex] == "7.5 hours") {
            return true;  // correct answer
        }
        if (currentNode == 54 && storyMap[currentNode].choices[choiceIndex] != "Have Nami use her Clima-Tact to create storms") {
            return false;  // incorrect answer
        }
        else if (currentNode == 54 && storyMap[currentNode].choices[choiceIndex] == "Have Nami use her Clima-Tact to create storms") {
            return true;  // correct answer
        }
        if (currentNode == 51 && storyMap[currentNode].choices[choiceIndex] != "The crew - they're the heart of our journey") {
            return false;  // Correct answer
        }
        else if (currentNode == 51 && storyMap[currentNode].choices[choiceIndex] == "The crew - they're the heart of our journey") {
            return true;  // Correct answer
        }//8 first questions out of 14

        return false; 
\
}

void Level2::moral(int choiceIndex) {
    Feedback total;
    if (currentNode == 1 && storyMap[currentNode].choices[choiceIndex] == "Go after Nami") {
        Feedback f1("You showed loyalty by chasing after Nami immediately. Your crew grows stronger with trust.\n", 5);
        total = total + f1;
    }
    if (currentNode == 1 && storyMap[currentNode].choices[choiceIndex] == "Continue the journey") {
        Feedback f2("You chose to continue on the journey without Nami. The seas are vast, but loyalty is your true North.\n", -5);
        total = total + f2;
    }
    if (currentNode == 54 && storyMap[currentNode].choices[choiceIndex] == "Attack head-on with Luffy's brute strength") {
        Feedback f3("You chose Luffy's strength to fight for Franky but, violence isn't always an answer\n", -5);
        total = total + f3;
    }
    if (currentNode == 54 && storyMap[currentNode].choices[choiceIndex] == "Have Nami use her Clima-Tact to create storms") {
        Feedback f4("You trusted Nami's intellect by choosing to use her Clima-Tact to create storms, \nand her control over the weather turned the tide in your favor. \nSometimes the smartest move is letting the right person shine", 5);
        total = total + f4;
    }
    if (currentNode == 54 && storyMap[currentNode].choices[choiceIndex] == "Trick them into fighting each other") {
        Feedback f5("Your cleverness almost worked, when you chose to trick them into fighting each other \n— but the enemies weren’t so easily fooled. True strategy needs more than just tricks; \nit needs timing and understanding", -5);
        total = total + f5;
    }
    if (currentNode == 54 && storyMap[currentNode].choices[choiceIndex] == "Escape and avoid battle") {
        Feedback f6("You chose to escape and avoid battle. Some problems can’t be outrun. \nFacing challenges head - on with a plan is sometimes the only way forward", -5);
        total = total + f6;
    }
    if (total.getMessage().length() != 0) {
        totalFeedback = totalFeedback + total;

    }
        storyMap[53] = {
            "introChapterThree.jpg",
            {"Feedback:\n " + totalFeedback.getMessage() + "\n Moral Score(EQ):\n" + std::to_string(totalFeedback.getMoraleBoost())},
            {},
            {}
    };
    //player->applyFeedback(total);
}