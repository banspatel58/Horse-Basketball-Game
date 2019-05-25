// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// banspate

#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>
#include "Player.h"

//default constructor
Player::Player(){
	
}

//destructor
Player::~Player(){
	
	//delete the block of array stored in heap to avoid memory leaks
	delete[] array;
	
}

Player::Player(std::string name, int takeShot){
	
	//instance of array
	array = new char[5];
	
	//allocate value for each array element
	array [0] = 'H';
	array [1] = 'O';
	array [2] = 'R';
	array [3] = 'S';
	array [4] = 'E';
	
	i = 0;

	//setting the name passed as parameter in class player
	this -> name = name;
	
}

//getter method used to access player name
std::string Player::getPlayerName(){
	
	//getting the name from the player
	return name;
	
}

//method that helps player make hit/ take shot
int Player::makeHit(){
	
	//generates a random number either 2 or 1
	int takeShot = rand () %2 + 1;
	
	return takeShot;
	
}

// method that helps keep track of characters that each player added from word HORSE 
char Player::playerScore(){
	
	std::cout << ( array[i] ) << std::endl;
			
	i++;
		
	return 0;	
	
}

// if the i reaches the value 5 its outside the array bound hence it returns true
//which inturn means player looses game
bool Player::loose(){
			
	if( i == 5 ){
			
		return true;
		
	}else{
			
		return false;
			
	}
}
		