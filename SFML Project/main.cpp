#include <SFML/Graphics.hpp>

int main()
{
    //Initialise a fullscreen window...
	sf::Window Window(sf::VideoMode(sf::VideoMode::getDesktopMode()), "SFML MORE LIKE SFM-SMELL!", sf::Style::Fullscreen);
    bool bWindowFocused = true;
    Window.setVerticalSyncEnabled(true);

    while (Window.isOpen())
    {
        //Window event polling...
        sf::Event WindowEvent;
        while (Window.pollEvent(WindowEvent))
        {
            //Switch going through the events that could have triggered
            switch (WindowEvent.type)
            {
                case sf::Event::Closed:
                    Window.close();
                    break;
                case sf::Event::GainedFocus:
                    bWindowFocused = true;
                    break;
                case sf::Event::LostFocus: 
                    bWindowFocused = false;
                    break;

                default:
                    break; 
            }
        }
    }
}