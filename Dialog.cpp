#include "Dialog.h"
void Dialog() {
	
	std::cout << "Welcome to 8-Puzzle Solver!" << "\n";
	std::cout << "Your auto generated puzzle is:" << "\n" << "\n";
	PuzzleBoard a;
	a.shuffle();
	std::cout << a << "\n";

	std::cout << "How do you want to solve it?" << "\n";
	std::cout << "1) Best First search with heuristic function for count of wrong placed numbers" << "\n";
	std::cout << "2) Best First search with heuristic function - Manhattan distance" << "\n";
	std::cout << "3) A* with heuristic function for count of wrong placed numbers" << "\n";
	std::cout << "4) A* with heuristic function - Manhattan distance" << "\n";
	std::cout << "Enter any number between 1 and 4" << "\n";
	short comand;
	std::vector<PuzzleBoard> game;
	std::cin >> comand;

	std::cout << "This may take a while . . . " << "\n";

	switch (comand)
	{
	case 1:
		game = BestFS(a, heuruisticCOM);
		break;
	case 2:
		game = BestFS(a, heuruisticMD);
		break;
	case 3:
		game = AStar(a, heuruisticCOM);
		break;
	case 4:
		game = AStar(a, heuruisticMD);
		break;
	default: 
		std::cout << "Wrong number input!";
		break;
	}

	std::cout << "The puzzle was solved in " << game.size()<< " moves!" << "\n";
	std::cout << "Do you want to see the sequence of the moves? " << "\n";
	std::cout << "y/n" << "\n";
	char answer;

	std::cin >> answer;

	switch (answer)
	{
	case 'y':
		std::cout << "This are the steps:  " << "\n";
		for (short i = 0; i < game.size(); i++)
		{
			std::cout <<"Step: "<<i+1<<'\n'<< game[i] << '\n';
		}
		break;
	case 'n':
		std::cout << "Good bye! " << "\n";
		break;
	default:
		std::cout << "Wrong answer input!";
		break;
	}



}