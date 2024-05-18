#include "Game.h"
#include <iostream>

Game::Game() {
	playing = true;
	player = new Player();
	board = new Board();
}

void Game::HandleMove() {
	bool validMove = false;

	while (!validMove) {
		char currentMoveChoice;

		std::cout << "\nWhich direction would you like to move?";
		std::cout << "\nUp[W], Down[S], Left[A], Right[D]";
		std::cin >> currentMoveChoice;

		switch (std::toupper(currentMoveChoice)) {

			case 'W':

				// Handling if the player is on the top edge of the board.
				if (player->GetPosition().y == 1) {
					player->SetPosition(player->GetPosition().x, board->GetHeight());
				}
				else {
					player->SetPosition(player->GetPosition().x, player->GetPosition().y - 1);
				}

				validMove = true;
				break;

			case 'S':

				// Handling if the player is on the bottom edge of the board.
				if (player->GetPosition().y == board->GetHeight()) {
					player->SetPosition(player->GetPosition().x, 1);
				}
				else {
					player->SetPosition(player->GetPosition().x, player->GetPosition().y + 1);
				}
				validMove = true;
				break;

			case 'A':

				// Handling if the player is on the left edge of the board.
				if (player->GetPosition().x == 1) {
					player->SetPosition(board->GetWidth(), player->GetPosition().y);
				}
				else {
					player->SetPosition(player->GetPosition().x - 1, player->GetPosition().y);
				}
				validMove = true;
				break;

			case 'D':

				// Handling if the player is on the right edge of the board.
				if (player->GetPosition().x == board->GetWidth()) {
					player->SetPosition(1, player->GetPosition().y);
				}
				else {
					player->SetPosition(player->GetPosition().x + 1, player->GetPosition().y);
				}
				validMove = true;
				break;

			default:
				std::cout << "Invalid input.";
				break;
		}
	}

	board->DrawBoard(player->GetPosition());
}

void Game::Update() {
	while (this->playing) {
		char currentChoice;

		std::cout << "\nWould you like to Move[M], Attack[A], or Quit[Q]: ";
		std::cin >> currentChoice;

		// Handling what to do based on player input.
		switch (std::toupper(currentChoice)) {
			case 'M':
				HandleMove();
				break;
			case 'A':
				break;
			case 'Q':
				this->playing = false;
				break;
			default:
				std::cout << "Invalid input.";
				break;
		}
	}
}