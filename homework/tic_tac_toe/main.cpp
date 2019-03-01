#include "tic_tac_toe.h"
#include<string>
#include<iostream>
#include<vector>
using std::cout;
using std::cin;
int main() 
{
	int input;
	int placing;
	string user;
	start_game
		cout << "Enter an X or an O to begin to determine your letter (X or O): "
		cin >> input;
	TicTacToe game;
	game.start_game(user)
		do
		{
			cout << ", Enter the number where you would like to place ";
			cin >> placing;
			game.mark_board(placing);
			game.display_board();
		} while (game.game_over() == false);
		cout << "Game over. Press 1 to play again and to exit, press 2 ";
		cin >> choice;
} while (choice == '1');
	return 0;
}