#pragma once
#include <utility>
#include <iostream>
#include <vector>
#include <cmath>
#include "HelpFunctions.h"

class PuzzleBoard
{
private:
	unsigned int gameBoard;
	char zeroIndex;

	int* randomArray()const;
public:
	void shuffle();
	PuzzleBoard();
	PuzzleBoard(const PuzzleBoard& puzzleBoard);
	PuzzleBoard& operator =(const PuzzleBoard& puzzleBoard);
	~PuzzleBoard();
	unsigned int getBoard()const;

	bool operator==(const PuzzleBoard& other)const;
	friend std::ostream& operator<<(std::ostream& os, const PuzzleBoard& board);
	int getZeroIndex()const;
	int getIndex(const int)const;
	std::vector<PuzzleBoard> getAllNeighbours()const;
	bool isPuzzleSolvable()const;
	int numberOfInversions()const;
	void swap(const int x);

};

