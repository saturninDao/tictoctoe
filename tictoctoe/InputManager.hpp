#pragma once

#include <SFML/Graphics.hpp>


namespace Sonar {

	class InputManager
	{
	public:
		InputManager();
		~InputManager();
		
		bool isSpriteClicked(
			sf::Sprite object,
			sf::Mouse::Button button,
			sf::RenderWindow& window
		);

		sf::Vector2i GetMousePosition(sf::RenderWindow& window);

	private:

	};

	InputManager::InputManager()
	{
	}

	InputManager::~InputManager()
	{
	}

}