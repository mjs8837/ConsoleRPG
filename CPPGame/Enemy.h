#pragma once
#include "Player.h"
#include "Utilities.h"

class Enemy {

public:
	Enemy();
	virtual void Attack(Player* player);
	void UpdateHealth(int healthChange);
	Vector2 GetPosition();
	void SetPosition(int x, int y);
	void Act();

private:
	int health;
	Vector2 position;
};

