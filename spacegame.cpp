// ABOUT THE GAME ITSELF!
// this is going to be a space game like space invaders. 
// the game is going to have enemys the player and obstacles.
// the player is going to be a triangle, 
// the aliens are going to be a sphere.
// THE GAMES ELEMENTS!!!
//
// TODO
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
using namespace std;
using namespace sf;


int main()
{
	RenderWindow window(VideoMode(800,600), "Spacegame");

	CircleShape triPlayer(100,3); // The Triangle is the player
	triPlayer.setFillColor(Color::Blue); // the colour is blue

	while(window.isOpen())

	{

		Event event;
		while(window.pollEvent(event))
		{
			if(event.type == Event::Closed) window.close();


			if(Keyboard::isKeyPressed(Keyboard::Q))
			{
				window.close(); // the game will quit if Q is pressed
			}
			if(Keyboard::isKeyPressed(Keyboard::Left))
			{
				triPlayer.move(-25,0);
			}
			if(Keyboard::isKeyPressed(Keyboard::Right))
			{
				triPlayer.move(25,0);
			}
			
		}
		window.clear();
		window.draw(triPlayer);
		window.display();
		
	}
	return 0;
}