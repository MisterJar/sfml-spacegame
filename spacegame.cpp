// ABOUT THE GAME ITSELF!
// this is going to be a space game like space invaders. 
// the game is going to have enemys the player and obstacles.
// the player is going to be a triangle, 
// the aliens are going to be a sphere.
//
//
//
// THE GAMES ELEMENTS!!!
// The games elements are going to be shooting at the aliens.
// The game might have health and might have some diffitculty areas.
// Plus here might be a main menu so you can change settings but thats for a different time.
//
// If theres anything that I or you want to add, list them here
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

	CircleShape triPlayer(80,3); // The Triangle is the player
	triPlayer.setFillColor(Color::Blue); // the colour is blue
	triPlayer.setPosition(300,400); // the position of the Player

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
			if(Keyboard::isKeyPressed(Keyboard::Left)) // player goes left
			{
				triPlayer.move(-25,0);
			}
			if(Keyboard::isKeyPressed(Keyboard::Right)) // player goes right
			{
				triPlayer.move(25,0);
			}
			if(Keyboard::isKeyPressed(Keyboard::Up)) // player goes up
			{
				triPlayer.move(0,-25);
			}
			if(Keyboard::isKeyPressed(Keyboard::Down)) // player goes down
			{
				triPlayer.move(0,25);
			}
			if(Keyboard::isKeyPressed(Keyboard::Space)) // fires gun
			{
				// this will make the gun fire.
			}
		}

	
		window.clear();
		window.draw(triPlayer);
		window.display();
		
	}
	return 0;
}
