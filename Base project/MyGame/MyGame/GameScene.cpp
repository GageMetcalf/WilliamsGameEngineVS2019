#include "GameScene.h"
#include "Ship.h"
#include "MeteorSpawner.h"

// Omitted code...

int GameScene::getScore()
{
	return score_;
}

void GameScene::increaseScore()
{
	++score_;
}



GameScene::GameScene()
{
	ShipPtr ship = std::make_shared<Ship>();
	addGameObject(ship);

	MeteorSpawnerPtr meteorSpawner = std::make_shared<MeteorSpawner>();
	addGameObject(meteorSpawner);
};
