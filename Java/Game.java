// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// banspate

import java.util.Random;
import java.util.Scanner;

public class Game{
	
	public static void main (String args[]){
		
		//create instance of class player
		Player Player1 = new Player("Player #1", 0);
		Player Player2 = new Player("Player #2", 0);
		
		System.out.println( " Welcome to the CSCI 240 Game of Horse! " );
		
		String answer = "";
		
		do{
			
			do{ 
				//if player1 gets random number 1 and player2 gets random number 2
				if ( (Player1.makeHit() == 1) && (Player2.makeHit() == 2) ){
				
					//gets player1 name and prints hit shot
					System.out.println( Player1.toString() + " Hit Shot! " );
				
					//gets player2 name and prints missed shot
					System.out.println( Player2.toString() + " Missed Shot! " );
				
					//since player1 hits shot and player2 misses shot player2 adds a character from array
					System.out.print( "\t" + Player2.toString() + " Added an " );
					System.out.println( Player2.playerScore() );
				
				
				}
				//if player1 gets random number 1 and player2 gets random number 2
				else if ( (Player1.makeHit() == 2) && (Player2.makeHit() == 1) ){
				
					//gets player2 name and prints missed shot
					System.out.println( Player1.toString() + " Missed Shot! " );
				
					//gets player2 name and prints hit shot
					System.out.println( Player2.toString() + " Hit Shot! " );
				
					//since player1 hits shot and player2 misses shot player2 adds a character from array
					System.out.print( "\t" + Player1.toString() + " Added an " );
					System.out.println( Player1.playerScore() );
				
				
				}else if ( (Player1.makeHit() == 1) && (Player2.makeHit() == 1) ){
				
					//gets player1 name and prints hit shot
					System.out.println( Player1.toString() + " Hit Shot! " );
				
					//gets player2 name and prints hit shot
					System.out.println( Player2.toString() + " Hit Shot! " );
			
				}else{
				
					//gets player1 name and prints misses shot
					System.out.println( Player1.toString() + " Missed Shot! " );
				
					//gets player2 name and prints misses shot
					System.out.println( Player2.toString() + " Missed Shot! " );
			
				}
			//do this steps while both player 1 and player 2 are inside the bound of the array	
			}while( (Player1.loose() == false) && (Player2.loose() == false) );
		
			//if player1 stays in bound than player2 looses the game as it goes outside the array bound
			if ( Player1.loose() == false ){
			
				System.out.println ( Player1.toString() + " Wins :: " + Player2.toString()  + " HORSE " );
			
			}
			//else player2 stays in bound than player1 looses the game as it goes outside the array bound
			else if( Player2.loose() == false ) {
			
				System.out.println ( Player2.toString() + " Wins :: " + Player1.toString()  + " HORSE " );
			
			}
			//ask player if they would like to continue
			System.out.print( " Would you like to play again ( Y|N ) ?: " );
			
			
			Scanner input = new Scanner(System.in);  
			answer = input.next();
			
			
		}while( answer.equals( "Y" ));
		
		System.out.println( " Thank you! Good Bye! \n " );
		
	}
}
