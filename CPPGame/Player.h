#pragma once

#include "Utilities.h"
#include <iostream>>

class Player {

private:
	std::string name;
	Vector2 playerPosition;

public:
	Player();

	/// <summary>
	/// Function that returns the players name.
	/// </summary>
	/// <returns>Returns the name of the player.</returns>
	std::string GetName();

	/// <summary>
	/// Function to set the name of the player.
	/// </summary>
	/// <param name="newName">The new name.</param>
	void SetName(std::string newName);

	/// <summary>
	/// Returns the position the player is currently at.
	/// </summary>
	/// <returns>The x,y coordinate the player is currently at.</returns>
	Vector2 GetPosition();

	/// <summary>
	/// Sets the player position to a new x,y position.
	/// </summary>
	/// <param name="x">The new x position.</param>
	/// <param name="y">The new y position.</param>
	void SetPosition(int x, int y);
};

