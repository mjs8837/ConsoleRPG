#include "Utilities.h"

Vector2::Vector2() {
	this->x = 0;
	this->y = 0;
}

Vector2::Vector2(int x, int y) {
	this->x = x;
	this->y = y;
}

int Utilities::GetRandomNumber(int max) {
	return rand() % max + 1;
}