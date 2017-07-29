/* 
 * File:   main.cpp
 * Author: Kal Dridi
 * Created on July 19, 2017, 9:04 PM
 * Purpose:  Template to be utilized in building
 *           Code Breaker use CPP
 */
//System Libraries
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;

//Global Constants

//User Libraries
const char CODE_SPAN = 9;		// range of digits allowed in the code (only digits 1 - 9 allowed)
const int CODE_LENGTH = 6;             // length of code
const int MAX_GUESSES = 10;             //Limits the number of guesses; this version of the game is harder than previous


//Functions Prototype
int randint(int);
int randint(int, int);
string get_player_code();
string generate_code();

int main() {                                        //Main code starts here
        
        //Declare random variables and initialize 
        //Random Number Generator
	srand( time(NULL) );
        //Declare Variables
	string player_guess, secret_code, secret_copy, player, player_copy;                 //Secret code and Player guess.

	char repeat_game;                                                                   //Player input at the end of the game.

	int num_guesses;

	bool game_over = false, guessed_code = false;
        //initialize Game by Output Welcome message
	cout << "WELCOME TO CODEBREAKER!\n\n";
	cout << "Oh no! The computer has generated a secret code. Can you guess it?\n";
        //While loop for validation Condition of Game Over
	while ( !game_over ) {


		cout << '\n' << setw(40) << "YOUR GUESSES:" << setw(15) << "CORRECT:" << setw(15) << "MISPLACED:" << '\n';
		cout << string(70, '=') << '\n';
	
		secret_code = generate_code();    
		secret_copy = secret_code;
		num_guesses = 0;
		//while loop for guessed code to test for validity of code 
		while (!guessed_code) {
	
			secret_code = secret_copy; 
			player = get_player_code();
			player_copy = player;
			int correct = 0;
			int misplaced = 0;
			num_guesses++;
			//Nested if to check player's code.
			if (player == secret_code){
			cout << "Congratulations, you guessed the code!\nIt only took you " << num_guesses << " guess(es)\n\n";
			break;
			} 
			
                        //for loop to check for ascending code digit
			for (int x = 0; x < CODE_LENGTH; x++){ 			// checking for correct digit 
				if (player[x] == secret_code[x]){
				correct++;
				player[x] = 'c';
				secret_code[x] = 'd';
				}
			}
			
			for (int x = 0; x < CODE_LENGTH; x++){    		// checking for misplaced digits
				for(int i = 0; i < CODE_LENGTH; i++){
					if (player[x] == secret_code[i]){
					misplaced++;
					player[x] = 'z';
					secret_code[i] = 'm';	
					}
				}
			}	
	if(num_guesses < MAX_GUESSES && player == secret_code){
			guessed_code = true;
			
        }
			/* Print player's guess and number of correct/misplaced digits */
			cout << '\n' << setw(40) << player_copy << setw(15) << correct << setw(15) << misplaced << '\n';
			cout << string(70, '=') << '\n';
	if ( !guessed_code ) {

				/* If they are, print a message and the guess counter, and flip the "guessed code" flag to end current round */

				cout << "Sorry, you've run out of guesses!\n";
				cout << "The secret code was: " << secret_code << "!\n\n";
		}
		else{
			cout<<"Congrats! You've guessed the secret code in "<< num_guesses << " guess(es)"<<"."<<'\n';
		}		
		}
                //Message Output that asks the user to Play again!!
		cout << "Would you like to play again (Y/N)? ";
		//Data Input repeat game.
		cin >> repeat_game;
		repeat_game = toupper(repeat_game);


		if ( repeat_game == 'N' ) {
			game_over = true;
		}

		else {
			guessed_code = false;
		}

	} // end while
        
        //Print Exit Message
	cout << "Thanks for playing!\n";

	return 0;

} // end main

//Function Definition and Declare internal variables
string get_player_code() {

	string player_code = "0000";
	string player_input;
	bool valid_code = false;

	while ( !valid_code ) {
		
		player_code = "0000";
		cout << "Enter Code: ";
		cin >> player_input;

		if (player_input.size() < CODE_LENGTH) {
			cout << "ERROR: Code Too Short!\n\n";
		}
		
		else if (player_input.size() > CODE_LENGTH){
			cout << "ERROR: Code Too Long!\n\n";
		}

		for (int x = 0; x < player_input.size(); x++){
			if (player_input[x] > (CODE_SPAN + '0') ){
				player_code = "1";
			}
		}
			
		if (player_code == "1"){
			cout << "ERROR: Code contains digits out of range specified or are not integers!\n\n";
		}
		
		if (player_input.size() == CODE_LENGTH && player_code != "1"){
			valid_code = true;
		}
		
	} // end while
	
	player_code = player_input;
	
	return player_code;	

} // end get_player_code()


string generate_code() {    			// generate code

	string code = "";

	for (int x = 0; x < CODE_LENGTH; x++){
		code.push_back( randint(1, CODE_SPAN + 1) + '0' );
	}
	
	return code;
	
} // end generate_code()

int randint(int max) {				// random number generator

	return ( rand() % max );

} 

int randint(int min, int max) {			// random number generator

	return ( randint( max - min ) + min );

} 