#pragma once

#include <SFML/Main.hpp>

//------WINDOW SETTINGS--------
#define WINDOW_SCREEN_WIDTH 1280
#define WINDOW_SCREEN_HEIGHT 720
//-----------------------------

//-------TEXT SETTINGS---------
#define FONT_HELSINKI_FILE_PATH "resources/fonts/helsinki.ttf"
#define TEXT_DEFAULT_FONT_SIZE 24
#define TEXT_DEFAULT_TEXT_COLOR sf::Color::White
//-----------------------------

//-----GRAPHICS SETTINGS------
	//----RESOURCES LOCATIONS----
	#define GRAPHICS_DEFAULT_TILE_FILE_PATH "resources/graphics/tileset.png"
	//---------------------------
	//---------TILE MAP-----------
	#define GRAPHICS_DEFAULT_TILE_SIZE 32
	#define GRAPHICS_DEFAULT_TILE_MAP_WIDTH (WINDOW_SCREEN_WIDTH / GRAPHICS_DEFAULT_TILE_SIZE)
	#define GRAPHICS_DEFAULT_TILE_MAP_HEIGHT (WINDOW_SCREEN_HEIGHT / GRAPHICS_DEFAULT_TILE_SIZE)
	#define GRAPHICS_DEFAULT_TILE_MAP_SIZE (GRAPHICS_DEFAULT_TILE_MAP_WIDTH * GRAPHICS_DEFAULT_TILE_MAP_HEIGHT)
	//-----------------------------
	//---------TEXTURES------------
		#define TEXTURE_DEFAULT_SIZE 32
		#define TEXTURE_DEFAULT sf::Vector2f(0.0f, 0.0f)
		//------------UI--------------
		#define TEXTURE_DEFAULT_BUTTON_SIZE sf::Vector2f(64.0f, 32.0f)
		#define TEXTURE_DEFAULT_BUTTON_IDLE sf::Vector2f(32.0f, 0.0f)
		#define TEXTURE_DEFAULT_BUTTON_HOVER sf::Vector2f(96.0f, 0.0f)
		#define TEXTURE_DEFAULT_BUTTON_ONCLICK sf::Vector2f(160.0f, 0.0f)

		#define TEXTURE_DEFAULT_UILIST_IDLE sf::Vector2f(256.0f, 0.0f)
		#define TEXTURE_DEFAULT_UILIST_HOVER sf::Vector2f(288.0f, 0.0f)

		#define TEXTURE_DEFAULT_STATIC_ITEM_SIZE sf::Vector2f(32.0f, 32.0f)
		#define TEXTURE_DEFAULT_STATIC_ITEM sf::Vector2f(224.0f, 0.0f)
		//----------------------------
	//-----------------------------
//----------------------------