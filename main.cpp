#include <SFML/Graphics.hpp>
#include "Board.hpp"

int main() {
    sf::RenderWindow window(sf::VideoMode(screenWidth * 10, screenHeight * 10), "Snake");
    Board board;

    sf::Clock clock;
    float deltaTime{};
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            } else if (event.type == sf::Event::KeyPressed) {
                if (event.key.code == sf::Keyboard::Up) {
                    board.changeDirection(Direction::UP);
                } else if (event.key.code == sf::Keyboard::Down) {
                    board.changeDirection(Direction::DOWN);
                } else if (event.key.code == sf::Keyboard::Left) {
                    board.changeDirection(Direction::LEFT);
                } else if (event.key.code == sf::Keyboard::Right) {
                    board.changeDirection(Direction::RIGHT);
                }
            }
        }

        if (deltaTime > 0.5) {
            deltaTime = 0.0f;
            if (board.update()) {
                return 2;
            }
        } else {
            deltaTime += clock.restart().asSeconds();
        }

        window.clear();
        board.drawBoard(window);
        window.display();
    }
    // for (int i = 0; i < 20; i++) {
    //     system("clear");
    //     std::this_thread::sleep_for(0.5s);
    // }

    return 0;
}
