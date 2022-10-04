#pragma once

#include <SFML/Graphics.hpp>

class Tile
{
public:
	enum Type { TopLeft, Top, TopRight, MidLeft, Mid, MidRight, BottomLeft, Bottom, BottomRight };
	enum Side { TopSide, LeftSide, RightSide, BottomSide };

	Tile(const Type& type);

	void setPosition(sf::Vector2i);
	sf::Vector2i getPosition();

	std::vector<Type> getValidNeighbors(const Side& side);

	void render(sf::RenderWindow& target);
private:
	std::map<Side&, std::vector<Type>&> validNeighbors;
	sf::Texture texture;
	sf::Sprite sprite;
};

