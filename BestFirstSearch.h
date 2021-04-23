#pragma once
#include "PuzzleBoard.h"
#include "HelpFunctions.h"

std::vector<PuzzleBoard> BestFS(const PuzzleBoard& board, int (*hFunction)(const PuzzleBoard&));


bool vectorContains(std::vector<PuzzleBoard> vector, PuzzleBoard element);
std::vector<std::pair<PuzzleBoard, std::vector<PuzzleBoard>>>
checkedRemover(const std::vector<std::pair<PuzzleBoard, std::vector<PuzzleBoard>>>& checked, const PuzzleBoard& board);


