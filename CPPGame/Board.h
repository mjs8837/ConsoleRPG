#pragma once
#include <iostream>
#include "Utilities.h"
#include "Enemy.h"

class Board {

private:
	int width;
	int height;

public:
	Board();

	/// <summary>
	/// Function to draw the initial board in the console.
	/// </summary>
	void DrawBoard(Vector2 playerPosition, std::vector<Enemy*> enemies);

	/// <summary>
	/// Function to get the width of the board.
	/// </summary>
	/// <returns>Returns the width of the board.</returns>
	int GetWidth();

	void SetWidth(int width);

	/// <summary>
	/// Function to get the height of the board.
	/// </summary>
	/// <returns>Returns the height of the board.</returns>
	int GetHeight();

	void SetHeight(int height);
};
