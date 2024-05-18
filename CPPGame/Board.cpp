#include "Board.h"

Board::Board() {
	this->height = 0;
	this->width = 0;
}

void Board::DrawBoard(Vector2 playerPosition) {
	// Looping through the height and width and drawing the appropriate starting board.
	for (int i = 1; i <= Board::GetHeight(); i++) {
		std::cout << "\n";
		for (int j = 1; j <= Board::GetWidth(); j++) {
			// Checking when to draw the player into the board.
			if (j == playerPosition.x && i == playerPosition.y) {
				std::cout << "P";
			}
			else {
				std::cout << "X";
			}
		}
	}
}

int Board::GetWidth() {
	return this->width;
}

void Board::SetWidth(int width) {
	this->width = width;
}

int Board::GetHeight() {
	return this->height;
}

void Board::SetHeight(int height) {
	this->height = height;
}