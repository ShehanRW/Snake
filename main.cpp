#include <SFML/Graphics.hpp>

using namespace sf;



int main()
{
    unsigned int width = 800 ,height = 600;
    RenderWindow window;
    window.create(VideoMode({width,height}), "Snake Game", Style::None);

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>()){
                window.close();
            }
            else if (const auto* keyPressed = event->getIf<sf::Event::KeyPressed>())
            {
                if (keyPressed->scancode == sf::Keyboard::Scancode::Escape)
                    window.close();
            }
        }

        window.clear();
        window.display();
    }
}