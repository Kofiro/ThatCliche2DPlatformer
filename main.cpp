// That Cliche 2D Platformer is a 2D project based on C++ and SFML

#include <SFML/Graphics.hpp>

int main(){

    // Create and initialize an instance of the RenderWindow class containing parameters for the window size and window title
    sf::RenderWindow window(sf::VideoMode(640, 480), "That Cliche 2D Platformer");

    // Check if window is open and create an event to handle key events
    while(window.isOpen()){
        sf::Event event;
        while(window.pollEvent(event)){
            if(event.type == sf::Event::Closed){
                // Close window button clicked
                window.close();
            }
        }

        // clear screen
        window.clear(sf::Color::Black);

        // Draw here.
        window.display();
    }

    return 0;
}
