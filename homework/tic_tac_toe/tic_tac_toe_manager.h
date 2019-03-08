#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
#include"tic_tac_toe.h"
#include<vector>
//Write class interface here

class Tic_Tac_Toe_Manager;
{
public:
	void save_game(const Tic_Tac_Toe game);
	void display_history()const;
private:
	int x_win{ 0 };
	int o_win { 0 };
	int ties { 0 };
	void update_winner_count(std::string winner)
};
#endif // !TIC_TAC_TOE_MANAGER_H
