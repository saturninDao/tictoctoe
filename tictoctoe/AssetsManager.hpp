#pragma once

#include <map>
#include <SFML/Graphics>

namespace Sonar {
	class AssetsManager
	{
	public:
		AssetsManager();
		~AssetsManager();

		void LoadTexture(std::string name, std::string fileName);
		sf::Texture &GetTexture(std::string name);

		void LoadFont(std::string name, std::string fileName);
		sf::Font &GetFont(std::string name);

	private:
		std::map<std::string, sf::Texture> _textures;
		std::map<std::string, sf::Font> _fonts;

	};

	AssetsManager::AssetsManager()
	{
	}

	AssetsManager::~AssetsManager()
	{
	}
}