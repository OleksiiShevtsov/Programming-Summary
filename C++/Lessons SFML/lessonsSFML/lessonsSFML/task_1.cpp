#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(640, 480), "task_1"/*, sf::Style::Fullscreen*/);
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    sf::Image heroImage;
    heroImage.loadFromFile("../img/hero.png");

    sf::Texture heroTexture;
    heroTexture.loadFromImage(heroImage);
    //planeTexture.loadFromFile("../image/tank.png");

    sf::Sprite heroSprite;
    heroSprite.setTexture(heroTexture);
    heroSprite.setTextureRect(sf::IntRect(0, 192, 96, 96));
    heroSprite.setPosition(100, 60);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) || (sf::Keyboard::isKeyPressed(sf::Keyboard::A))) { heroSprite.move(-1, 0); heroSprite.setTextureRect(sf::IntRect(0, 96, 96, 96)); };
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) || (sf::Keyboard::isKeyPressed(sf::Keyboard::D))) { heroSprite.move(1, 0); heroSprite.setTextureRect(sf::IntRect(0, 192, 96, 96)); };
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) || (sf::Keyboard::isKeyPressed(sf::Keyboard::W))) { heroSprite.move(0, -1); heroSprite.setTextureRect(sf::IntRect(0, 288, 96, 96)); };
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) || (sf::Keyboard::isKeyPressed(sf::Keyboard::S))) { heroSprite.move(0, 1); heroSprite.setTextureRect(sf::IntRect(0, 0, 96, 96)); }
            if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) { heroSprite.setColor(sf::Color::Blue); };
            
        }

        window.clear();
        window.draw(heroSprite);
        window.display();
    }

    return 0;
}