#include "HeuristicFunctions.h"

//Heuristic function for number of wrong placed numbers:
int heuruisticCOM(const PuzzleBoard& gameBoard)
{
	int counter = 0;
	unsigned int temp = gameBoard.getBoard();
	for (short i = 8; i >= 0; i--)
	{
		if (temp % 10 != i) counter++;
		temp = temp / 10;
	}
	return counter;
}

//Heuristic function - Manhattan distance
int heuruisticMD(const PuzzleBoard& gameBoard)
{
	unsigned int temp = gameBoard.getBoard();
	short tempArr[3][3];
	for (short i = 2; i >= 0; i--)
	{
		for (short j = 2; j >= 0; j--)
		{
			tempArr[i][j] = temp % 10;
			temp /= 10;
		}
	}
	short manhattanSum = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			switch (tempArr[i][j])
			{
			case 0:
				manhattanSum = manhattanSum + (abs(i - 0) + abs(j - 0));
				break;
			case 1:
				manhattanSum = manhattanSum + (abs(i - 0) + abs(j - 1));
				break;
			case 2:
				manhattanSum = manhattanSum + (abs(i - 0) + abs(j - 2));
				break;
			case 3:
				manhattanSum = manhattanSum + (abs(i - 1) + abs(j - 0));
				break;
			case 4:
				manhattanSum = manhattanSum + (abs(i - 1) + abs(j - 1));
				break;
			case 5:
				manhattanSum = manhattanSum + (abs(i - 1) + abs(j - 2));
				break;
			case 6:
				manhattanSum = manhattanSum + (abs(i - 2) + abs(j - 0));
				break;
			case 7:
				manhattanSum = manhattanSum + (abs(i - 2) + abs(j - 1));
				break;
			case 8:
				manhattanSum = manhattanSum + (abs(i - 2) + abs(j - 2));
				break;
			default:
				throw"Exception";
			}
		}
	}
	return manhattanSum;
}