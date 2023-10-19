/*
Teacher: Sara Kfouri
Student: Lovisa Nguyen 2104554
*/

/*Dungeon Adventure Game

Objective:
The objective of this game is for the player to navigate an ancient dungeon in search of a hidden treasure. Along the way, they will face choices, potential traps, and opportunities to find useful items. Their decisions will determine the outcome of their adventure.

Game Elements:

Health: The player starts with a health meter. Encountering traps will reduce health. If health reaches 0, the game ends. Rooms: The dungeon is a series of rooms. In each room, the player must decide whether to go left, go right, pick up an item, or exit the dungeon.
Key: Hidden in one of the rooms. This is necessary to unlock the treasure room.
Treasure Room: The final goal. If the player finds this room and has the key, they win the game. Without the key, they'll need to continue searching.
Game Flow:
Starting: The player begins at the entrance of the dungeon.
Making Choices: In each room, the player chooses an action.
Go Left: The player moves to another room. There's a chance they might fall into a trap and lose health, or they might proceed safely. Go Right: The player moves to another room. Sometimes, they might discover the locked treasure room. If they have the key, they can unlock it and win. If not, they need to continue searching.
Pick Up Item: The player can find items in the room. Sometimes they might find a key, which is required to unlock the treasure. Exit Dungeon: The player can choose to leave the dungeon anytime, ending the game.
Endings: The game can end in several ways:
Player finds the treasure (winning scenario).
Player's health reaches 0 (losing scenario).
Player chooses to exit the dungeon (neutral scenario).
Dungeon Adventure Game

Objective:
The objective of this game is for the player to navigate an ancient dungeon in search of a hidden treasure. Along the way, they will face choices, potential traps, and opportunities to find useful items. Their decisions will determine the outcome of their adventure.

Game Elements:

Health: The player starts with a health meter. Encountering traps will reduce health. If health reaches 0, the game ends. Rooms: The dungeon is a series of rooms. In each room, the player must decide whether to go left, go right, pick up an item, or exit the dungeon.
Key: Hidden in one of the rooms. This is necessary to unlock the treasure room.
Treasure Room: The final goal. If the player finds this room and has the key, they win the game. Without the key, they'll need to continue searching.
Game Flow:
Starting: The player begins at the entrance of the dungeon.
Making Choices: In each room, the player chooses an action.
Go Left: The player moves to another room. There's a chance they might fall into a trap and lose health, or they might proceed safely. Go Right: The player moves to another room. Sometimes, they might discover the locked treasure room. If they have the key, they can unlock it and win. If not, they need to continue searching.
Pick Up Item: The player can find items in the room. Sometimes they might find a key, which is required to unlock the treasure. Exit Dungeon: The player can choose to leave the dungeon anytime, ending the game.
Endings: The game can end in several ways:
Player finds the treasure (winning scenario).
Player's health reaches 0 (losing scenario).
Player chooses to exit the dungeon (neutral scenario).
Extra task : This task is open-ended on purpose. We want to see where your creativity and skills can take you. However, ensure that any new features or changes you introduce don't overcomplicate the game to the point of making it inaccessible to new players.
Some ideas:

More Rooms Expand the dungeon by adding more rooms. Perhaps there's a puzzle room where players have to answer a riddle, or a mirror room where players have to identify the real exit amongst many reflections.

Challenges: Introduce new challenges.

Items: Introduce new items. Alongside the key, maybe there's a map that gives hints, a shield that protects from a single trap, or a lamp that reveals hidden doors.

Multiple Endings: Can you introduce multiple, distinct endings to the game? Depending on the player's choices, they could face different final challenges or discover different treasures.

Enhanced Outcomes: Add more varied endings based on the player's choices. Maybe there's a bad ending, a good ending, and a perfect ending.*/

#include <iostream>
using namespace std;

int main() {
    int health = 100;
    char choice;
    bool hasKey = false;

    std::cout << "Welcome to the Dungeon Adventure Game!" << endl;
    std::cout << "Your health: " << health << endl;

    while (health > 0 && health < 200) {
        std::cout << "\nYou are in a room. What do you want to do? Press in a number." << endl;
        std::cout << "1. Go left" << endl;
        std::cout << "2. Go right" << endl;
        std::cout << "3. Pick up item" << endl;
        std::cout << "5. Jump to the roop" << endl;
        std::cout << "4. Exit dungeon" << endl;
        std::cin >> choice;

        switch (choice) {
            case '1': // Go left
                std::cout << "You decided to go left." << endl;
                std::cout << "You found a mysterious room with an ancient inscription on the wall." << endl;
                std:cout << "Press in an option:\n T. Touch the inscription\n S. Smell the inscription\n L.Taste the inscription\n R. Run away to the Start\n";
                char inscription;
                std::cin >> inscription;
                switch (inscription) {
                    case 'T': std::cout << "You received ancient virus! Lose 5 health."; health -= 1;break;
                    case 'S': std::cout << "You're gifted ancient healing perfume! Gain 50 health\n"; health +=50; break;
                    case 'L': std::cout << "You recieved ancient bacteria! Your DNA's is upgraded! Gain 10 health\n"; health +=10;break; 
                    case 'R': std::cout << "You're kicked out of this game. Without discovering ability to explore the dungeon, you should not be here!\n"; health -=1000; break;
                }
                break;

            case '2': // Go right
                std::cout << "You decided to go right." << std::endl;
                std::cout << "The key is kept in the front door nested in the room, which is imprinted a chess-match. Based on the chess-match, you need to calculate the function: f(x(1/3))= 3x+1/2x**3, and answer the question: x=1**(1/23), true or false?\n";
                std::cout << "Type in your answer:\n";
                std::cin >> hasKey;
                if (hasKey == true) {
                    std::cout << "You found the treasure room! You use the key to unlock the treasure. You win!" << std::endl;
                    return 0;
                } else {
                    std::cout << "You found the treasure room, but it's locked! You need to find a key.\n" << std::endl;
                    std::cout << "In looking for the key inside the room, You step on a block on the floor, which activated the room' walls moving apart.\n You must jump up to one of the wall to be safe from the rising flood of water  inside the room.\n";
                    char wallcall;
                    std::cout << "Press in an option:\n N. North Wall\n W. West Wall\n S. South Wall\n E. East Wall\n";
                    std::cin >> wallcall;
                    switch (wallcall) {
                    case 'N': std::cout << "The flood stops. And the walls too. The treasure is open due to the moisturizer of the flooding water. You won!\n"; health -= 1;break;
                    case 'S': std::cout << "Your choosen wall is broken apart due to your weight, and flooding is rising. You swim to the top and used much energy.\n"; health -=50;break;
                    case 'E':
                        std::cout << "The wall takes you to another room in the Room's Matrix. You need to find a map to get out." << std::endl;
                        health += 10;
                        std::cout << "Choose one of these ancient poems to call out the map:\ Opla. One piece leans away\n Amfa. An mapper fall as\n \Theta. The unkown time as" << std::endl;
                        char mapcall;
                        std::cin >> mapcall;
                        switch (mapcall) {
                            case 'Opla': std::cout << "Congratulations! You summons Light and Angels. They help you any wish. The map is in your hands and you are free now from the matrix\n"; health += 2;break;
                            case 'Amfa': std::cout << "Congratulations! You summond Evil Gaze. You lose 15 health as a payment. But gain a lesson, which help you gain 5 health. "; health -=10; break;
                            case 'Theta': std::cout << "You recieved the Magical Map! And the key. You won the game.\n"; health +=10;break; 
                        }
                    ;break; 
                    case 'W': std::cout << "You found the key on the top of the wall, but the treasure is now in the bottom of the water. You swim to there and open it. Lose or win depending on your health. Each swimming step takes 20 healths\n"; health -=20; break;
                }
                break;
                }
                break;

            case '3': // Pick up item
                // Handle picking up an item here
                break;
                if (!hasKey) {
                    std::cout << "You found a key on the ground. This might be useful!" << endl;
                    hasKey = true;
                } else {
                    std::cout << "There's nothing else here." << endl;
                }
                break;
            case '4': // Exit
                std::cout << "You decided to exit the dungeon. Better safe than sorry!" << endl;
                return 0;
            default:
                std::cout << "Invalid choice. Try again." << endl;
                break;

            case '5': // Jump to the roof
            std::cout << "You decided to Jump to the roof" << endl;
                std::cout << "You found a mysterious room with an ancient animal locked on the wall.\n The with-dangerous-look animal asks you to save it in return it will give you a secret gift.\n The wall behind the animal says: Eating this salve gives you new life of +100 health.\n " << endl;
                std:cout << "Press in an option:\n B. Break the lock chains\n E.Eat the slave\n O.Take a crystal from the salve\n D. Kick the wall";
                char ancientanimal;
                std::cin >> ancientanimal;
                switch (ancientanimal) {
                    case 'B': std::cout << "The animal turned out to be the Owner of the Dungeon, who gifts you the treasure and the key. You won this level. See you in the next!!"; health += 100000;break;
                    case 'E': std::cout << "You woke up in the position of the slave. You are locked in here forever. You are now the salve of the wall. Gameover\n"; health -=500; break;
                    case 'O': std::cout << "You are delused in the realm of the crystal. You lose your mind"; health -=99;break; 
                    case 'D': std::cout << "You are kicked out of the Wall-delusion. You knew that the animal is the Owner of this place. However, you have been sent back to the Start!"; health +=20; break;
                }
                break;
        }

        std::cout << "Your health: " << health << endl; //Health is always 100%
        if (health > 250) {
            std::cout << "Your health level is in level of Ancient Power. Congratulations, You are uploaded to the next level now!";
        }
    }
    return 0;
}