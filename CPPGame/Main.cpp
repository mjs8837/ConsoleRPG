#include <iostream>
#include <string.h>
#include <sstream>
#include <stdlib.h>
#include "Game.h"

#pragma region Helper Functions

/// <summary>
/// Function to get a string name from user input.
/// </summary>
/// <returns>Returns the name for the player.</returns>
std::string GetName() {
    std::string newName;
    std::cin >> newName;
    return newName;
}

/// <summary>
/// Helper function to check if a passed in string is a valid int.
/// </summary>
/// <param name="stringToCheck">The string to check.</param>
/// <returns>Returns if the string is valid or invalid.</returns>
bool IsValidEntry(std::string stringToCheck) {
    bool validEntry = true;

    // Loops through each character of the passed in string to check if it's an int.
    for (int i = 0; i < stringToCheck.length(); i++) {
        if (!isdigit(stringToCheck[i])) {
            validEntry = false;
            std::cout << "Invalid entry.";
            break;
        }
    }

    return validEntry;
}

/// <summary>
/// Getting the board width from user input.
/// </summary>
/// <returns>Returns the value of the inputted width.</returns>
int GetBoardWidth() {
    int width;
    std::string widthString;
    bool appropriateWidth = true;

    do {
        std::cout << "Please enter the width of the board you want to play on: ";
        std::cin >> widthString;

    } while (!IsValidEntry(widthString));

    width = std::stoi(widthString);

    return width;
}

/// <summary>
/// Getting the board height from user input.
/// </summary>
/// <returns>Returns the valud of the inputted height.</returns>
int GetBoardHeight() {
    int height;
    std::string heightString;
    bool appropriateHeight = true;

    do {
        std::cout << "Please enter the height of the board you want to play on: ";
        std::cin >> heightString;

    } while (!IsValidEntry(heightString));

    height = std::stoi(heightString);

    return height;
}

#pragma endregion

#pragma region Main

/// <summary>
/// Function that handles initial setup of the game.
/// </summary>
void Start() {
    srand(time(NULL));

    // Creating a game instance.
    Game game = Game();

    // Setting the player's name from user input.
    std::cout << "Hello and welcome to my C++ game!\n";
    std::cout << "Please enter your name: ";
    game.player->SetName(GetName());
    std::cout << "Welcome " + game.player->GetName() + "!\n";

    // Setting the board height and width.
    game.board->SetWidth(GetBoardWidth());
    game.board->SetHeight(GetBoardHeight());

    // Setting the player at a random location and drawing the initial board.
    game.player->SetPosition(rand() % game.board->GetWidth() + 1, rand() % game.board->GetHeight() + 1);
    std::cout << game.player->GetPosition().x << game.player->GetPosition().y;
    game.board->DrawBoard(game.player->GetPosition());

    // Starts the first update call.
    game.Update();
}

int main()
{
    Start();
}

#pragma endregion
