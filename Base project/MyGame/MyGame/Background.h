#pragma once

#include "Engine/GameEngine.h"

class Background :public GameObject {
public:
	void draw();
    void update(sf::Time& elapsed);
	Background();

private:
	sf::Sprite sprite_;

};