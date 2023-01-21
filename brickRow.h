#pragma once
#include "SFML/Graphics.hpp"
#include "settings.h"
#include <ctime>
#include "functions.h"
#include "bat.h"
#include "TextObj.h"
#include "Brick.h"

struct BrickRow {
	Brick arr[10];
	int size;
};

void bricksInit(BrickRow& brickRow, int size, sf::Vector2f position, float stepX) 
{
	brickRow.size = size;
	for (int i = 0; i < brickRow.size; i++) {
		sf::Color color{ (sf::Uint8)(25 * i), 100, 100 };
		sf::Vector2f brickPos{ position.x + i * stepX, position.y };
		brickInit(brickRow.arr[i], color, brickPos);
	}
 }