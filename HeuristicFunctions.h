#pragma once
#include "PuzzleBoard.h"

	//Heuristic function for number of wrong placed numbers:
	int heuruisticCOM(const PuzzleBoard& gameBoard);

	//Heuristic function - Manhattan distance
	int heuruisticMD(const PuzzleBoard& gameBoard);

