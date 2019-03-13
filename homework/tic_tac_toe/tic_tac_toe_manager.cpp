#include "tic_tac_toe_manager.h"
#include"tic_tac_toe.h"
#include <vector>
#include <string>

//Write class function implementations here
void Tic_Tac_Toe_Manager::save_game(const TicTacToe game)
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
void Tic_Tac_Toe_Manager::update_winner_count(std::string winner)
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

std::ostream & operator<<(std::ostream & out(std::cout << pegs[i] << "|" << pegs[i + 1] << "|" << pegs[i + 2] << "\n") const Tic_Tac_Toe_Manager &b)
{
	// TODO: insert return statement here
}

std::istream & operator<<(std::istream & in, const Tic_Tac_Toe_Manager & b)
{
	// TODO: insert return statement here
}
