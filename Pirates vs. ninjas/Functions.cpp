//Tecumseh McMullin CSC 275
//Functions.cpp the file for all the functions.


//including the header files for use.
#include "PiratesvsNinjas.h"
#include "Classes.h"


//the decision() function has an input from the user for decisions they need to make in the main() function.
bool decision() {

	//declaring local variables for decision().
	bool ans;
	bool select = true;
	char choice;

	//a while loop that varifies the choice made by the user.
	while (select == true) {

		//input from the player for the choice they have to make.
		cin >> choice;

		//tells the main function that the answer was yes and closes the while loop.
		if (choice == 'y' || choice == 'Y') {
			ans = true;
			select = false;
		}

		//tells the main function that the answer was no and closes the while loop.
		else if (choice == 'n' || choice == 'N') {
			ans = false;
			select = false;
		}

		//repeats the loop because the user didn't put a valid input.
		else {
			cout << "Please input a valid reply." << endl;
		}
	}

	//returns the answer that the user selected to the main function.
	return ans;
}

//the title() function prints out the title screen asking the player if they want to play. it also returns nothing.
void title() {
	cout << "Pirates Vs. Ninjas" << endl;
	cout << "Would you like to play? y/n" << endl;
}

//the playAgain() function asks the player if they want to play again and returns nothing.
void playAgain() {
	cout << "Would you like to play again? y/n" << endl;
}

//the CharacterChoice() function takes an input from the user then returns it.
int CharacterChoice() {

	//declaring local variables.
	int Choice;
	bool option = true;

	//this while loop makes sure that the player inputs a valid input.
	while (option == true)
	{
		cout << "Please enter the number corrisponding with your choice" << endl;

		//gets the user input.
		cin >> Choice;

		//this switch statement tells the return value what its supposed to be.
		switch (Choice)
		{
		case 1:
			option = false;
			break;
		case 2:
			option = false;
			break;
		default:
			cout << "please enter a valid option." << endl;
			break;
		}

	}

	//returns the input value.
	return Choice;
}

//the NinjaBattle() functon returns nothing and outputs the story if they choose to side with ninjas.
void NinjaBattle() {
	cout << "\"Yarrrr, I knew we could count on you\"" << endl;
	cout << "You are brought to the battlefield and can see that the pirates are slaughtering the ninja, they desparately needed your help" << endl;
}

//the PirateBattle() function returns nothing and outputs the story if they choose to side with pirates.
void PirateBattle() {
	cout << "\"Thank you, your help will not go unrewarded\"" << endl;
	cout << "You are on the battlefield but all you see are pirate bodies dropping, The ninjas are overwealming them." << endl;
}