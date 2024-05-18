#include "Player.h"

Player::Player()
{
}

std::string Player::GetName() {
	return Player::name;
}

void Player::SetName(std::string newName) {
	name = newName;
}

Vector2 Player::GetPosition() {
	return this->playerPosition;
}

void Player::SetPosition(int x, int y) {
	playerPosition = Vector2(x, y);
}
