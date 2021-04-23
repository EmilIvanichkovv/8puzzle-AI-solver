#pragma once
#include "BestFirstSearch.h"

std::vector<PuzzleBoard> AStar(const PuzzleBoard& board, int (*hFunction)(const PuzzleBoard&));