//Tecumseh McMullin CSC 275
//Classes.h the header file for the classes.

//defines the Classes.h file if it hasn't been defined yet.
#ifndef CLASSES_H
#define CLASSES_H

//include the iostream library and tells the file that we are using std.
#include <iostream>
using namespace std;

//the gamestructure class that is the pinnical of the pyrimad of classes.
class GameStructure
{
public:
	void help();
};

//the Character class is a subclass of the gamestructure class.
class Character :
	public GameStructure
{
public:

	//declaring public methods for the character class and all subclasses to use.
	string Name;
	void setHealth(int Health);
	int getHealth();
	void Talk(string stuffToSay);
	void Talk(string name, string stuffToSay);
	int Attack();
	void help();
	void heal();
private:

	//declaring private methods.
	int Health;
};

//the Pirate class is a subclass of the character class.
class Pirate :
	public Character
{
public:

	//declaring public methods for the Pirate class to use.
	Pirate(string name);
	void UseSword();
	int Attack();
	void help();
};

//the Ninja class is a subclass of the character class.
class Ninja :
	public Character
{
public:

	//declaring public methods for the Ninja class to use.
	Ninja(string name);
	void ThrowStars();
	int Attack();
	void help();
};



//ends the definition of the classes.h file.
#endif // !CLASSES_H

