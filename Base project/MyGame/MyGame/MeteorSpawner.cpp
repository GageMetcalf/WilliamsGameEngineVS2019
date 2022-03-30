#include "MeteorSpawner.h"
// The number of milliseconds between meteor spawns.
const int SPAWN_DELAY = 1000;

void MeteorSpawner::update(sf::Time& elapsed) {
	// Determin how much time has passed and adjaust our timer.
	int msElapsed = elapsed.asMilliseconds();
	timer_ -= msElapsed;

	// If our timer has elapsed, reset it and spawn a meteor.
	if (timer_ <= 0)
	{
		timer_ = SPAWN_DELAY;

		sf::Vector2u size = GAME.getRenderWindow().getSize();

		// Spawn the meteor off the right side of the screen.
		// we're assuming the meteor isn'tb more than 100 pixels wide.
		float meteorX = (float)(size.x + 75);

		// Spwan teh meteor somewhere along the higth of the window, randomly.
		float meteorY = (float)(rand() % size.y);

		// Create a meteor and add it to teh scene
		MeteorPtr meteor = std::make_shared<Meteor>(sf::Vector2f(meteorX, meteorY));
		GAME.getCurrentScene().addGameObject(meteor);
	}
}