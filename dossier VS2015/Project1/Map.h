#ifndef _MAP_H_
#define _MAP_H_
#include <SFML/Graphics.hpp>
#include <stdio.h>
#include "Case.h"
#include "Screen.h"
#define TAILLE_ECRAN 1800
class Map
{

public: 
	Map();
	~Map();
	std::vector<Case*>* cases;
	void update();
	void draw();
};




#endif