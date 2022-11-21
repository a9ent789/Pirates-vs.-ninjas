//Tecumseh McMullin CSC 275
//PiratesvsNinjas.cpp  the main file.

//including libraries and the header files.
#include "PiratesvsNinjas.h"
#include "Classes.h"
#include <iostream>

//telling the file that we are using std.
using namespace std;


//the main() function is the backbone of the entire program.
int main() {

	//declaring local variables for the main() function.
	bool fight;
	int dmg;
	string pirateName = "John";
	string ninjaName = "Kentaki";
	string opponentName = "Enemy";
	string pirateIntro = "\"Yarrrr, It's on\"";
	string ninjaIntro = "*a penatrating silence*";
	bool playgame = true;

	//calls the title() function.
	title();

	//an if statement that starts the game if the player decided to play.
	if (decision() == true) {

		//a while loop that allows the player to keep playing until they are done.
		while (playgame == true) {

			//declaring local variables that will reset every loop.
			int allyHealth = 100;
			int opponentHealth = 100;

			//outputing story.
			cout << "You are approached by a Pirate and a Ninja." << endl;
			cout << "The pirate says \"We are in a battle with the Ninjas and could use a captain\"" << endl;
			cout << "\"With those scars you have seen many battles and could help us a lot" << endl;
			cout << "Before you can even think The ninja chips in." << endl;
			cout << "\"We are fighting with the Pirates and could use a commander, and you seem to be a greate warrior\"" << endl;
			cout << "Who will you decide to help" << endl;
			cout << "1. Pirates         2. Ninjas" << endl;

			//checking to see if the player chose to go with pirates or ninjas.
			if (CharacterChoice() == 1) {

				//calls the piratebattle() function.
				PirateBattle();

				//creating the pirate and ninjas as ally and opponent for the fight.
				Pirate Ally = Pirate(pirateName);
				Ninja Opponent = Ninja(opponentName);

				//tells the player that the fight has started.
				cout << "The battle has started" << endl;

				//calls the talk method for Ally.
				Ally.Talk(pirateIntro);

				//calls the talk method for Opponent.
				Opponent.Talk(ninjaIntro);

				//calls the setHealth method for Ally.
				Ally.setHealth(allyHealth);

				//calls the setHealth method for Opponent.
				Opponent.setHealth(opponentHealth);
				fight = true;

				//a while loop that keeps the player in the fight until one of the characters is dead.
				while (fight == true) {

					//telling the player the commands they have.
					cout << "You have two commands" << endl;
					cout << "1. Attack     2. Heal" << endl;

					//a switch statement that takes the user input from the CharacterChoice() function.
					switch (CharacterChoice())
					{
					case 1:

						//the player decided to attack.
						cout << "You tell your champion to attack" << endl;

						//sets the dmg for the ally by calling the Attack() method.
						dmg = Ally.Attack();

						//tells the player how much damage they did.
						cout << "Your champion does " << dmg << " damage!" << endl;

						//changes the opponentHealth based on the damage done.
						opponentHealth = opponentHealth - dmg;

						//calls the setHealth() method to check if the opponent is dead.
						Opponent.setHealth(opponentHealth);

						//uses the getHealth() method to see if the opponent is dead and escapes the battle.
						if (Opponent.getHealth() >> 0) {

							//setting the dmg from the Attack() method for opponent.
							dmg = Opponent.Attack();

							//tells the player that the opponent did an amount of damage.
							cout << "The enemy attacks and does " << dmg << " damage!" << endl;

							//sets allyHealth based on the dmg done.
							allyHealth = allyHealth - dmg;

							//uses the setHealth() method to determine if the ally is dead or sets the new health if they are allive.
							Ally.setHealth(allyHealth);

							//an if statement if the ally died exits the fight.
							if (Ally.getHealth() == 0) {
								cout << "You were defeated and with that the ninjas destroyed the rest of the pirates." << endl;
								cout << "You Lose!!" << endl;
								fight = false;
							}
						}
						else {

							//outputs the story if they won the fight.
							cout << "You defeated the enemy!" << endl;
							cout << "The other pirates see this and gives them a strong morale boost." << endl;
							cout << "The tide of battle changes and the pirates defeat the ninjas claiming their treasures." << endl;
							cout << "You Win!!!" << endl;
							fight = false;

						}
						break;
					case 2:

						//the case if the player wanted the character to heal.
						cout << "You tell your champion to heal" << endl;

						//calls the heal() method to heal for 10 point.
						Ally.heal();

						//sets the damage for the opponents attack from the Attack() method.
						dmg = Opponent.Attack();

						//tells the player how much damage the opponent did.
						cout << "The enemy attacks and does " << dmg << " damage!" << endl;

						//sets allyHealth based on the dmg done.
						allyHealth = allyHealth - dmg;

						//uses the setHealth() method to determine if the ally is dead or sets the new health if they are allive.
						Ally.setHealth(allyHealth);

						//an if statement if the ally died exits the fight.
						if (Ally.getHealth() == 0) {
							cout << "You were defeated and with that the ninjas destroyed the rest of the pirates." << endl;
							cout << "You Lose!!" << endl;
							fight = false;
						}
						break;
					
					}
				}
			}
			else {

				//calls the NinjaBattle() function because the player chose to go with the ninjas.
				NinjaBattle();

				//creating the pirate and ninjas as ally and opponent for the fight.
				Ninja Ally = Ninja(ninjaName);
				Pirate Opponent = Pirate(opponentName);
				cout << "The battle has started" << endl;

				//Uses the talk() method for the ally intro.
				Ally.Talk(pirateIntro);

				//calls the talk method for Opponent.
				Opponent.Talk(ninjaIntro);

				//calls the setHealth method for Ally
				Ally.setHealth(allyHealth);

				//calls the setHealth method for Opponent.
				Opponent.setHealth(opponentHealth);
				fight = true;

				//a while loop that keeps the player in the fight until one of the characters is dead.
				while (fight == true) {

					//telling the player the commands they have
					cout << "You have two commands" << endl;
					cout << "1. Attack     2. Heal" << endl;

					//a switch statement that takes the user input from the CharacterChoice() function.
					switch (CharacterChoice())
					{
					case 1:

						//the player decided to attack.
						cout << "You tell your champion to attack" << endl;

						//sets the dmg for the ally by calling the Attack() method.
						dmg = Ally.Attack();

						//tells the player how much damage they did.
						cout << "Your champion does " << dmg << " damage!" << endl;

						//changes the opponentHealth based on the damage done.
						opponentHealth = opponentHealth - dmg;

						//calls the setHealth() method to check if the opponent is dead.
						Opponent.setHealth(opponentHealth);

						//uses the getHealth() method to see if the opponent is dead and escapes the battle.
						if (Opponent.getHealth() >> 0) {

							//setting the dmg from the Attack() method for opponent.
							dmg = Opponent.Attack();

							//tells the player that the opponent did an amount of damage.
							cout << "The enemy attacks and does " << dmg << " damage!" << endl;

							//sets allyHealth based on the dmg done.
							allyHealth = allyHealth - dmg;

							//uses the setHealth() method to determine if the ally is dead or sets the new health if they are allive.
							Ally.setHealth(allyHealth);

							//an if statement if the ally died exits the fight
							if (Ally.getHealth() == 0) {
								cout << "You were defeated." << endl;
								cout << "The rest of the battle goes the same way and the pirates slaughter all of the ninja." << endl;
								cout << "You lose!!" << endl;
								fight = false;
							}
						}
						else {

							//outputs the story if they won the fight.
							cout << "You defeated the Pirate!!" << endl;
							cout << "The other ninja see this and it seems like their abilities have been boosted." << endl;
							cout << "This changes the tides of battle and the ninja were able to defend their home from the pirates." << endl;
							cout << "You Win!!!" << endl;
							fight = false;

						}
						break;
					case 2:

						//the case if the player wanted the character to heal.
						cout << "You tell your champion to heal" << endl;

						//calls the heal() method to heal for 10 point.
						Ally.heal();

						//sets the damage for the opponents attack from the Attack() method.
						dmg = Opponent.Attack();

						//tells the player how much damage the opponent did.
						cout << "The enemy attacks and does " << dmg << " damage!" << endl;

						//sets allyHealth based on the dmg done.
						allyHealth = allyHealth - dmg;

						//uses the setHealth() method to determine if the ally is dead or sets the new health if they are allive.
						Ally.setHealth(allyHealth);

						//an if statement if the ally died exits the fight.
						if (Ally.getHealth() == 0) {
							cout << "You were defeated." << endl;
							cout << "The rest of the battle goes the same way and the pirates slaughter all of the ninja." << endl;
							cout << "You lose!!" << endl;
							fight = false;
						}
						break;

					}
				}
			}

			//calls the playAgain() function to ask the user if they want to play again.
			playAgain();

			//and if statement that uses the decision() function and if the didn't want to play again it exits the game.
			if (decision() == false) {
				playgame = false;
			}
		}
	}

	//and output message for whtn the game is left.
	cout << "Goodbye great warrior." << endl;

	//returns a value of 0.
	return 0;
}