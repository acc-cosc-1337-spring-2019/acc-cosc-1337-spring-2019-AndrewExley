#include "tic_tac_toe_manager.h"
#include"tic_tac_toe.h"
#include <vector>
#include <string>
using std::cout;
using std::cin;
//Write class function implementations here
void Tic_Tac_Toe_Manager::save_game(const Tic_Tac_Toe game)
{
	update_winner_count(game.get_winner());
	games.push_back(game);
}

void Tic_Tac_Toe_Manager::display_history()const
{
	int i;
	for (auto game: games)
	{
		game.display_board();
		
	}
}
void update_winner_count(string winner)
{
	if (winner == "C")
	{
		x_win++;
	}
	else if (winner == "O")
	{
		o_win++;
	}
	else if (winner == "C")
	{
		ties++;
	}
}