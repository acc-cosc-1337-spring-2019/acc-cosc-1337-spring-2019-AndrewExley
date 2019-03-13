#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
#include"tic_tac_toe.h"
#include<vector>
//Write class interface here

class Tic_Tac_Toe_Manager
{
public:
	void save_game(const TicTacToe game);
	void display_history()const;
	friend std::ostream & operator << (std::ostream & out(std::cout << pegs[i] << "|" << pegs[i + 1] << "|" << pegs[i + 2] << "\n")
		const Tic_Tac_Toe_Manager & b);

	friend std::istream & operator << (std::istream & in,
		const Tic_Tac_Toe_Manager & b);
private:
	std::vector<TicTacToe> games;
	int x_win{ 0 };
	int o_win { 0 };
	int ties { 0 };
	void update_winner_count(std::string winner);
	std::string winner;
};
#endif // !TIC_TAC_TOE_MANAGER_H
