// PaperRockSissors.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include<ctime>


using namespace std;

string computerChoice();// This function prototype is to hold and return the computers random choice for papper rock or scissors
void getWinner(string computerChoice, string playerChoice);// This function prototype will take the choice by the human and by the computer and then compare for the winner.





int main()
{
	// Title display got the game
	cout << "\t\t*********************************"<<endl;
	cout << "\t\tWelcome to Paper,Rock,Scissors!!" << endl;
	cout << "\t\t*********************************" << endl;
	//Title display for the game

	
	int startGame=1;
	srand(time(0));


	//Loop that will keep playing the game as long as player choice yes.
	while (startGame ==1)
	{
		string playersChoice;// creating variable to store players chocie.
		cout << "Please type in your selection: Paper,Rock or Scissors" << endl;//asking the player to type in their choice
		getline(cin, playersChoice);// saving players choice to a variable.
	
		string computerChoice1 = computerChoice();// making the computer choice equal to the random computer choice function.
		getWinner(computerChoice1, playersChoice);//calling the function so we can decide a winner.

		cout << "Would you like to play again? (1-for yes||2-for no)" << endl;// giving player choice to play again
		cin >> startGame;
		cin.ignore();
	}
	cout << "Try again another time!" << endl;

	system("pause");
    return 0;
}


void getWinner(string computerChoice, string playerChoice)// This function will take the choice by the human and by the computer and then compare for the winner.
{
	string playerChoice1 = playerChoice;

	if (playerChoice1 == "Paper" && computerChoice == "Rock")
	{
		cout << "The player has won..." << playerChoice1 << " beats " << computerChoice << endl;
	}
	 else if (playerChoice1 == "Rock" && computerChoice == "Paper")
	{
		cout << "The computer has won..." << computerChoice << " beats " << playerChoice1 << endl;
	}
	 else if (playerChoice1 == "Scissors" && computerChoice == "Paper")
	{
		cout << "The player has won..." << playerChoice1 << " beats " << computerChoice << endl;
	}
	 else if (playerChoice1 == "Paper" && computerChoice == "Scissors")
	{
		cout << "The computer has won..." << computerChoice << " beats " << playerChoice1 << endl;
	}
	 else if (playerChoice1 == "Rock"  && computerChoice == "Scissors" )
	{
		cout << "The player has won..." << playerChoice1 << " beats " << computerChoice << endl;
	}
	 else if (playerChoice1 == "Scissors"  && computerChoice == "Scissors" )
	{
		cout << "This is a tie game!!" << endl;
	}
	else if (playerChoice1 == "Rock" && computerChoice == "Rock")
	{
		cout << "This is a tie game!!" << endl;;
	}
	else if (playerChoice1 == "Paper"  && computerChoice == "Paper")
	{
		cout << "This is a tie game!!" << endl;
	}
	else 
		cout << "Invalid choice!!" << endl;
}
string computerChoice()// This function is to hold and return the computers random choice for papper rock or scissors
{
	string choices[3] = { "Paper","Rock","Scissors" };

	//int choicesSize = sizeof(choices - 1);

	return choices[rand() % 3];
}