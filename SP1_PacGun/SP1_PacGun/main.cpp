#include <iostream>
#include <fstream>
#include "gameStage.h"

using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::ofstream;

enum gameState
{
	MAIN_MENU,
	LOAD_MENU,
	GAME,
	QUIT,
	MAX_STATES
};

void main()
{
	gameState game = MAIN_MENU;

	while(game != QUIT)
	{
		switch(game)
		{
			case MAIN_MENU:
				mainMenu();
				break;
			case GAME:
				game();
				break;
		}
	}
}