// Game.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<SFML/Main.hpp>
#include<SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>


using namespace sf;
	int main()
	{
		RenderWindow window(VideoMode(1920, 1080), "Game Window");
		while (window.isOpen())
		{
			window.setFramerateLimit(60);
			window.setTitle("Game Window");
			Event event;
			while (window.pollEvent(event))
			{
				if (event.type == Event::Closed)
				{
					window.close();
				}
			}
			window.clear(Color(64,225,208));
			window.display();
		}
		return 0;
	}
