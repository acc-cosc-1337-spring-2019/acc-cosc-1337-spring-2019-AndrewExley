#include "tic_tac_toe_manager.h"
#include <string>
#include <iostream>
#include"tic_tac_toe_3.h"
#include"tic_tac_toe_4.h"
using std::cout; 
using std::cin;
using std:: string;

int main() 
{
	string first;
	char desc;
	int position;
	TicTacToeManager manager;

	do 
	{
		int Choice;
		TicTacToe* tic_tac_toe;

		cout << "Enter 3 to play tic_tac_toe_3 or 4 to play tic_tac_toe_4: ";
		cin >> Choice;
		if (Choice == 3)
		{
			tic_tac_toe = new TicTacToe3();
		}
		else if (Choice == 4)
		{
			tic_tac_toe = new TicTacToe4();
		}
		cout << "First player: ";
		cin >> first;
		tic_tac_toe->start_game(first);

		while (tic_tac_toe->game_over() == false) 
		{
			cin >> *tic_tac_toe;
			cout << *tic_tac_toe;
			cout << "\n\n";
		}

		cout<< "Winner is " << tic_tac_toe->get_winner();

		manager.save_game(*tic_tac_toe);

		cout << "Press y to play again: ";
		cin >> desc;

	} while (desc == 'y');

	cout<<manager;

	return 0;
}}