#include "Board.h"

Board::Board() {
	this->height = 0;
	this->width = 0;
}

void Board::DrawBoard(Vector2 playerPosition, std::vector<Enemy*> enemies) {
	bool drawEnemy = false;

	// Looping through the height and width and drawing the appropriate starting board.
	for (int i = 1; i <= Board::GetHeight(); i++) {
		std::cout << "\n";
		for (int j = 1; j <= Board::GetWidth(); j++) {

			for (int k = 0; k < enemies.size(); k++) {
				if (j == enemies[k]->GetPosition().x && i == enemies[k]->GetPosition().y) {
					drawEnemy = true;
					break;
				}
			}

			// Checking when to draw an enemy, player, or empty spot.
			if (drawEnemy) {
				std::cout << "E";
				drawEnemy = false;
			}
			else if (j == playerPosition.x && i == playerPosition.y) {
				std::cout << "P";
			}
			else {
				std::cout << "X";
			}
		}
	}
	
	std::cout << "\n";
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