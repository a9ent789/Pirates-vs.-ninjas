//Tecumseh McMullin CSC 275
//Classes.cpp the file for all of the class functions.


//including header files for use.
#include "Classes.h"
#include "PiratesvsNinjas.h"

//the Pirate method UseSword() is just a pirate shouting. returns nothing.
void Pirate::UseSword() {
	cout << "I am Swooshing my Sword!" << endl;
}

//the Ninja method ThrowStars() is just a ninja shouting. returns nothing.
void Ninja::ThrowStars() {
	cout << "I am throwing stars!" << endl;
}

//this is the constructor for the Pirate class. it passes an input to name the pirate.
Pirate::Pirate(string name) {
	Name = name;
}

//this is the constructor for the Ninja class. it passes an input to name the ninja.
Ninja::Ninja(string name) {
	Name = name;
}

//the Character method setHealth() allows the setting health for all characters and subclasses, and checks to see if they are dead. returns nothing.
void Character::setHealth(int NewHealth) {

	//this if statement checks to see if the character expired.
	if (NewHealth <= 0) {
		Health = 0;
		cout << "Character has Expired..." << endl;
	}
	else {
		Health = NewHealth;
	}
}

//the Character method getHealth() gets the health of the character and all subclasses. returns nothing.
int Character::getHealth() {
	return Health;
}

//the Character method talk() outputs the introduction of the character and all subclasses. returns nothing. takes stuff to say as input.
void Character::Talk(string stuffToSay)
{
	cout << "My name is " << Name << " " << stuffToSay << endl;
}

//the Character method talk() outputs the introduction of the character and all subclasses. returns nothing and takes stuff to say and name as an input.
void Character::Talk(string name, string stuffToSay)
{
	cout << "My name is " << name << " " << stuffToSay << endl;
}

//the Character method Attack() returns the value of 10 for all classes and subclasses.
int Character::Attack() {
	return 10;
}

//the Pirate method Attack() returns the value of 25 overloading the Character method Attack().
int Pirate::Attack() {
	return 25;
}

//the Ninja method Attack() returns the value of 25 overloading the Character method Attack().
int Ninja::Attack() {
	return 25;
}

//the GameStructure method help() is empty and returns no value.
void GameStructure::help() {

}

//the Character method help() overloads GameStructure's but is also empty and returns no value.
void Character::help() {

}


//the Pirate method help() overloads Character's but outputs something from the pirate and returns no value.
void Pirate::help() {
	cout << "Pirates are neet they use swords and have wooden legs." << endl;
}

//the Ninja method help() overloads Character's but outputs somehting from the pirate and returns no value.
void Ninja::help() {
	cout << "Ninjas are cool they throw stars, and are assassins" << endl;
}

//the Characture method heal() increases the health of a character and all subclasses by 10 and returns nothing.
void Character::heal() {
	Health = Health + 10;
}