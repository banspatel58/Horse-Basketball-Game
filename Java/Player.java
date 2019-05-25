// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// banspate

import java.util.Random;


// Class Declaration

public class Player{
	
	// Instance Variables
	String name;
	int takeShot;
	char [] array = {'H','O','R','S','E'};
	
	
	int i = 0;
	
	// overloaded constructor Declaration of Class
	public Player(String name, int takeShot){   
	
		this.name = name;
		
	}
	// method 1
	public String getName(){
		
		return name;
	}
	// method 2
	public int makeHit(){
		//generate random number either 1 or 2
		Random rand = new Random();
		this.takeShot = rand.nextInt(2) + 1;
		
		return this.takeShot;
		
	}

	//method 3
	public String toString(){
		// print the player name
		return( this.getName() + ":" );
	}
	
	//method 4
	public char playerScore(){
		//print the character from HORSE
		System.out.println( array[i] );
		
		i++;
		
		return 0;
		
	}
	//method 5
	
	public boolean loose(){
		
		//decide if player looses or wins
		//as soon as i goes to 5th index it breaks
		if( i == 5 ){
			
			return true;
		
		}else{
			
			return false;
			
		}
		
	}

}