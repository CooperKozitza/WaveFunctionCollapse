#include "Tile.h"

Tile::Tile(const Type& type)
{
	switch (type)
	{
	case Tile::TopLeft:
		validNeighbors = std::map<Tile::Side&, std::vector<Tile::Type>>{
			{
				Tile::TopSide,
				std::vector<Tile::Type>{Tile::Top, Tile::Mid, Tile::BottomLeft, Tile::Bottom, Tile::BottomRight}
			},
			{
				Tile::LeftSide,
				std::vector<Tile::Type>{Tile::TopRight, Tile::MidLeft, Tile::Mid, Tile::BottomRight}
			},
			{
				Tile::RightSide,
				std::vector<Tile::Type>{Tile::Top, Tile::TopRight, Tile::BottomRight}
			},
			{
				Tile::Bottom,
				std::vector<Tile::Type>{Tile::MidLeft, Tile::BottomLeft, Tile::BottomRight}
			}
		};
		break;
	case Tile::Top:
		break;
	case Tile::TopRight:
		break;
	case Tile::MidLeft:
		break;
	case Tile::Mid:
		break;
	case Tile::MidRight:
		break;
	case Tile::BottomLeft:
		break;
	case Tile::Bottom:
		break;
	case Tile::BottomRight:
		break;
	default:
		break;
	}
}
