// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// banspate

#include <iostream>
#include <string>

class Player{
	private:
		//instance variables
		std::string name;
		char * str;
		char *array;
		int i;
	
	public:
		
		//default constructor
		Player();
		
		//destructor
		~Player();
		
		//overloaded constructor
		Player(std::string name, int takeShot);
		
		//method 1
		std::string getPlayerName();
		
		//method 2
		int makeHit();
		
		//method 3
		char playerScore();
		
		//method 4
		bool loose();
		
};