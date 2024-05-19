#pragma once

#include <vector>
#include "Player.h";
#include "Board.h";
#include "Enemy.h"
#include "MeleeEnemy.h"
#include "Utilities.h"

enum Difficulty {
	Easy,
	Medium,
	Hard
};

class Game {
public:
	//static Game* instancePtr;
	static void CreateInstance();

	Difficulty currentDifficulty;
	bool playing;
	Game();
	Player* player;
	Board* board;
	std::vector<Enemy*> enemyList;

	void CreateBoard();
	void HandleMove();
	void Update();
};
