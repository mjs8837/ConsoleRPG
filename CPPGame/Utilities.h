#pragma once
#include <stdlib.h>
#include <vector>

struct Vector2 {

public:
	int x;
	int y;
	Vector2();
	Vector2(int x, int y);
};

static class Utilities {

public:
	static int GetRandomNumber(int max);
};