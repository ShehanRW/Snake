#include <SFML/Graphics.hpp>

using namespace sf;

int N=30, M=20;
int size = 16;
int w = size*N;
int h = size*M;

int main()
{
    RenderWindow window(sf::VideoMode({w, h}), "SFML works!");
    CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Blue);

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }
}