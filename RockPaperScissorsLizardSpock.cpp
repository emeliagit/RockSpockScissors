/*

This program makes "Rock, Paper, Scissors, Lizard, Spock" from The Big Bang Theory playable on a computer. Now, you can play without friends, which I'm sure is useful for many of us.
The rules are as follows:


Scissors cuts Paper

Paper covers Rock

Rock crushes Lizard

Lizard poisons Spock

Spock smashes Scissors

Scissors decapitates Lizard

Lizard eats Paper

Paper disproves Spock

Spock vaporizes Rock

*/

#include <iostream>
#include <random>

using namespace std;

int main()
{
	// introduce each option, Rock, Paper, Scissors, Lizard, and Spock, as well as an integer for the computer's pick, CP.
	int Rock, Paper, Scissors, Lizard, Spock, CP;
	// Give CP 5 different options, each corresponding to an option the player has. 
	Rock = 1, Paper = 2, Scissors = 3, Lizard = 4, Spock = 5;
	// Create a character for the player selection
	char selection;

	// Create random number between 1 and 5 and assign it to CP, the computer's pick. 
	srand(time(NULL));
	CP = rand() % 5 + 1;
	
	// Welcome message and a prompt to make a selection 
	cout << "Hello there! It seems you wish to play Rock (r), Paper (p), Scissors (s), Lizard (l), Spock (S). Please, do pick one.\n";
	cin >> selection;


	// The actual meat of the game, uses if statements to determine the player's answer, then nested switch statements to compare it to the computer's answer.
	if (selection == 'r') {
		switch (CP) {
		case 1 : 
			cout << "Computer chooses rock!\n";
			cout << "Rock is rock. Rock tie with rock";
			break;
		case 2 : 
			cout << "Computer chooses paper!\n";
			cout << "Paper covers rock. You lose.";
			break;
		case 3 : 
			cout << "Computer chooses scissors!\n";
			cout << "Rock crushes scissors. You win.";
			break;
		case 4 : 
			cout << "Computer chooses lizard!\n";
			cout << "Rock crushes lizard. You win.";
			break;
		case 5 : 
			cout << "Computer chooses Spock!\n";
			cout << "Spock vaporizes rock. You lose.";
			break;
		}

	}

	else if (selection == 'p') {
		switch (CP) {
		case 1:
			cout << "Computer chooses rock!\n";
			cout << "Paper covers rock. You win.";
			break;
		case 2:
			cout << "Computer chooses paper!\n";
			cout << "Paper is paper. Paper^2 = tie.";
			break;
		case 3:
			cout << "Computer chooses scissors!\n";
			cout << "Scissors cuts paper. You lose.";
			break;
		case 4:
			cout << "Computer chooses lizard!\n";
			cout << "Lizard eats paper. You lose.";
			break;
		case 5:
			cout << "Computer chooses Spock!\n";
			cout << "Paper disproves Spock. You win.";
			break;
		}
	}

	else if (selection == 's') {
		switch (CP) {
		case 1:
			cout << "Computer chooses rock!\n";
			cout << "Rock crushes scissors. You lose.";
			break;
		case 2:
			cout << "Computer chooses paper!\n";
			cout << "Scissors cuts paper. You win.";
			break;
		case 3:
			cout << "Computer chooses scissors!\n";
			cout << "scissors + scissors = tie.";
			break;
		case 4:
			cout << "Computer chooses lizard!\n";
			cout << "Scissors decapitate lizard. You win.";
			break;
		case 5:
			cout << "Computer chooses Spock!\n";
			cout << "Spock crushes scissors. You lose.";
			break;
		}
	}

	else if (selection == 'l') {
		switch (CP) {
		case 1:
			cout << "Computer chooses rock!\n";
			cout << "Rock crushes lizard. You lose.";
			break;
		case 2:
			cout << "Computer chooses paper!\n";
			cout << "Lizard eats paper. You win.";
			break;
		case 3:
			cout << "Computer chooses scissors!\n";
			cout << "Scissors decapitates lizard. You lose.";
			break;
		case 4:
			cout << "Computer chooses lizard!\n";
			cout << "Lizard makes friends with other lizard and runs away. You lose.";
			break;
		case 5:
			cout << "Computer chooses Spock!\n";
			cout << "Lizard poisons Spock. You win.";
			break;
		}
	}

	else if (selection == 'S') {
		switch (CP) {
		case 1:
			cout << "Computer chooses rock!\n";
			cout << "Spock vaporizes rock. You win.";
			break;
		case 2:
			cout << "Computer chooses paper!\n";
			cout << "Paper disproves Spock. You lose.";
			break;
		case 3:
			cout << "Computer chooses scissors!\n";
			cout << "Spock crushes scissors. You win.";
			break;
		case 4:
			cout << "Computer chooses lizard!\n";
			cout << "Lizard poisons Spock. You lose.";
			break;
		case 5:
			cout << "Computer chooses Spock!\n";
			cout << "Spock looks in a mirror and feels bad about himself. Tie.";
			break;
		}
	}

	// Just a statement for input errors
	else {
		cout << "Oops, that doesn't seem like the right answer. Please restart.";
	}
	
return 0;
}
