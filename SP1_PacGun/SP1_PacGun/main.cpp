#include <iostream>
#include <fstream>
#include "gameStage.h"
#include "../../../SP1Framework/SP1Framework/Framework/console.h"

using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::ofstream;

void main()
{
	//setConsoleSize(97,97);

	gameState game = GAME;

	while(game != EXIT)
	{
		switch(game)
		{
			case MAIN_MENU:
				mainMenu();
				break;
			case GAME:
				gameScreen(game);
				break;
			case QUIT_MENU:
				quit(game);
				break;
		}
	}
}