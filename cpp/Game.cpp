// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// banspate

#include "Player.h"
#include <iostream>
#include <stdlib.h>
#include <ctime>


int main(){
	
	//seed random once
	srand(time(NULL));
	
	
	std::cout << " Welcome to the CSCI 240 Game of Horse! " << std::endl;
	
	//create the objects of class player
	Player * Player1 = new Player( " Player #1", 0 );
	Player * Player2 = new Player( " Player #2", 0 );
	
	char answer[1];
	// As long as user enters Y(or any other letter accept N, this loop keeps on repeating itself
	while(answer[0] != 'N'){
		do{  
	
			//if player1 gets random number 1 and player2 gets random number 2
			if( (Player1 -> makeHit() == 1) && (Player2 -> makeHit() == 2) ){
			
				//gets player1 name and prints hit shot
				std::cout << ( Player1 -> getPlayerName() + ": Hit Shot! " ) << std::endl;
	
				//gets player2 name and prints missed shot
				std::cout << ( Player2 -> getPlayerName() + ": Missed Shot! " ) << std::endl;
			
				//since player1 hits shot and player2 misses shot player2 adds a character from array
				std::cout << ( "\t" + Player2 -> getPlayerName() + " Added an " );
				std::cout << ( Player2 -> playerScore() ) << std::endl;
			
			}
			//if player1 gets random number 1 and player2 gets random number 2
			else if( (Player1 -> makeHit() == 2) && (Player2 -> makeHit() == 1) ){
			
				//gets player2 name and prints missed shot
				std::cout << ( Player1 -> getPlayerName() + ": Missed Shot! " ) << std::endl;
			
				//gets player2 name and prints hit shot
				std::cout << ( Player2 -> getPlayerName() + ": Hit Shot! " ) << std::endl;
			
				//since player1 hits shot and player2 misses shot player2 adds a character from array
				std::cout << ( "\t" + Player1 -> getPlayerName() + " Added an " );
				std::cout << ( Player1 -> playerScore() ) << std::endl;
			
			}
			else if ( (Player1 -> makeHit() == 1) && (Player2 -> makeHit() == 1) ){
			
				//gets player1 name and prints hit shot
				std::cout << ( Player1 -> getPlayerName() + ": Hit Shot! " ) << std::endl;
			
				//gets player2 name and prints hit shot
				std::cout << ( Player2 -> getPlayerName() + ": Hit Shot! " ) << std::endl;
			
			}
			else{
			
				//gets player2 name and prints missed shot
				std::cout << ( Player1 -> getPlayerName() + ": Missed Shot! " ) << std::endl;
			
				//gets player2 name and prints missed shot
				std::cout << ( Player2 -> getPlayerName() + ": Missed Shot! " ) << std::endl;
			
			}
		
		//do this steps while both player 1 and player 2 are inside the bound of the array
		}while ( (Player1 -> loose() == false) && (Player2 -> loose() == false) );
	
		//if player1 stays in bound than player2 looses the game as it goes outside the array bound
		if ( Player1 -> loose() == false ){
			
			std::cout << ( Player1 -> getPlayerName() + " Wins :: " + Player2 -> getPlayerName() + ": HORSE " ) << std::endl;
			
		}
		//else player2 stays in bound than player1 looses the game as it goes outside the array bound
		else if( Player2 -> loose() == false ) {
			
			std::cout << ( Player2 -> getPlayerName() + " Wins :: " + Player1 -> getPlayerName() + ": HORSE " ) << std::endl;
			
		}
		//ask the user whether they would like to continue
		std::cout << "Would you like to continue?(Y|N):" ;
	
		std::cin >> answer;
	}
	
	//If the user enters N, as per the condition of the while loop than it exits while loop and prints the following statement
	std::cout << " Thank you! Good Bye! \n " << std::endl;

	//delete the player objects stored on heap to avoid memory leaks
	delete Player1;
	delete Player2;
	
}

 
