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
// Make gameplay items like money and the players and misc stuff.
class Points {
	public:


};
class spaceMoney {
	public:
		int ironMoney = 10;
		int goldMoney = 50;
		int platMoney = 100;
};
class player {
	public:
		// make player health and other stuff that the player should have.
		int health = 100;
		int shield = 200;
		long int money = 0;

};
class alien {
	public:
		// make alien health and other stuff that the aliens should have.
		int alienHealth = 70;
		int alienShield = 40;

};


int main()
{
	RenderWindow window(VideoMode(800,600), "Spacegame");
// THIS IS GOING TO BE THE PLAYER!!!! HE SHOULD BE A TRIANGLE!!! BECAUSE SPACESHIP!!!
	CircleShape triPlayer(80,3); // The Triangle is the player
	triPlayer.setFillColor(Color::Blue); // the colour is blue
	triPlayer.setPosition(300,400); // the position of the Player


// THIS IS GOING TO BE THE ALIEN! HE SHOULD BE A SPHERE! BECAUSE UFO!
	CircleShape alien(60,8);
	alien.setFillColor(Color::Red);
	alien.setPosition(300,100);
// THIS IS GOING TO BE THE BULLET, IT IS GOING TO BE WHITE, AND A RECTANGLE
	RectangleShape bullet(Vector2f(10,5)); // the size and the width of the rectangle/bullet
	bullet.rotate(90); // rotate 90 degrees
	bullet.setFillColor(Color::White); // the colour of the bullet

	// other types

	while(window.isOpen())

	{

		Event event;
		while(window.pollEvent(event))
		{
			if(event.type == Event::Closed) window.close();
					

			// trying to make the bullet stay with the player.
//			if(the player moves.)
//			{
//				// move the bullet where the player is.
//				// add the statement where the bullet can be the same as the players
//			}

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
				cout << "pew pew goes the gun!" << endl;
				// this will make the gun fire.
				window.draw(bullet);
			}
		}

	
		window.clear();
		window.draw(triPlayer); // draws player
		window.draw(bullet); // draws bullet
		window.draw(alien); // draws alien
		window.display(); // draws the display!
		
	}
	return 0;
}
