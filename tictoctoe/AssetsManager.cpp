#include "AssetsManager.hpp"

namespace Sonar {
	void AssetsManager::LoadTexture(std::string name, std::string fileName) 
	{
		sf::Texture tex;
		if (tex.loaFromFile(fileName))
		{
			this->_textures[name] = tex;
		}
	}
	
	sf::Texture& AssetsManager::GetTexture(std::string name) {
		return this->_textures.at(name);
	}

	void AssetsManager::LoadFont(std::string name, std::string fileName)
	{
		sf::Font font;
		if (font.loaFromFile(fileName))
		{
			this->_font[name] = font;
		}
	}

	sf::Texture& AssetsManager::GetFont(std::string name) {
		return this->_fonts.at(name);
	}
}