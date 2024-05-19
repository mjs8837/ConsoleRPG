#include "Enemy.h"
#include <iostream>

Enemy::Enemy() {
	health = 5;
	position = Vector2();
}

void Enemy::Attack(Player* player)
{
	std::cout << "Attack called.\n";
}

void Enemy::UpdateHealth(int healthChange)
{
	this->health += healthChange;
}

Vector2 Enemy::GetPosition() {
	return this->position;
}

void Enemy::SetPosition(int x, int y) {
	this->position = Vector2(x, y);
}

void Enemy::Act() {

}