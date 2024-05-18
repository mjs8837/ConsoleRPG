#pragma once
#include "Player.h";
#include "Board.h";

class Game {
public:
	bool playing;
	Game();
	Player* player;
	Board* board;

	void HandleMove();
	void Update();
};
