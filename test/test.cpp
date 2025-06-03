#include <SFML/Graphics.hpp>
#include "D:/CAR RACING GAME/includes/Car.hpp"
#include "D:/CAR RACING GAME/UI_UX/menu.hpp"
#include <filesystem>
using namespace sf;

int main()
{
    RenderWindow app(VideoMode(800, 600), "Car Racing Game Menu");
    app.setFramerateLimit(60);

    Menu menu(app.getSize().x, app.getSize().y);

    while (app.isOpen())
    {
        Event e;
        while (app.pollEvent(e))
        {
            if (e.type == Event::Closed)
                app.close();
            if (e.type == Event::KeyPressed)
            {
                if (e.key.code == Keyboard::Up)
                    menu.MoveUp();
                else if (e.key.code == Keyboard::Down)
                    menu.MoveDown();
                else if (e.key.code == Keyboard::Return)
                {
                    int selected = menu.GetPressedItem();
                    if (selected == 0)
                    {
                        // TODO: Start race
                    }
                    else if (selected == 4)
                    {
                        app.close();
                    }
                }
            }
        }

        app.clear();
        menu.draw(app);
        app.display();
    }
    return 0;
} // tạm thời hiển thị menu
