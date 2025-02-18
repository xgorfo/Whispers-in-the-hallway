#include <SFML/Graphics.hpp>
#include "Constants.h"
#include <windows.h>

using namespace sf;

float frame = 0;

int main() {
    RenderWindow window(VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "GAME-PROJECT-RPG");

    Image image;
    image.loadFromFile("player.png");
    Texture texture;
    texture.loadFromFile("player.png");
    Sprite player;
    player.setTexture(texture);
    player.setTextureRect(IntRect(0, 0, 31, 32));
    player.setPosition(10,10);
    Clock clock;

    while (window.isOpen()) {
        float time = clock.getElapsedTime().asMicroseconds();
        clock.restart ();

        time = time / 1500;
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed) {
                window.close();
            }
        }

        if (Keyboard::isKeyPressed(Keyboard::A)) {
            player.move(-0.5 * time, 0);
            frame += 0.01 * time;
            if (frame > 2) frame -= 2;
            player.setTextureRect(IntRect(31 * int(frame), 96, 31, 32));
        }
        if (Keyboard::isKeyPressed(Keyboard::D)) {
            player.move(0.5 * time, 0);
            frame += 0.01 * time;
            if (frame > 2) frame -= 2;
            player.setTextureRect(IntRect(31 * int(frame), 32, 31, 32));
        }
        if (Keyboard::isKeyPressed(Keyboard::W)) {
            player.move(0, -0.5 * time);
            frame += 0.01 * time;
            if (frame > 2) frame -= 2;
            player.setTextureRect(IntRect(31 * int(frame), 0, 31, 32));
        }
        if (Keyboard::isKeyPressed(Keyboard::S)) {
            player.move(0, 0.5 * time);
            frame += 0.01 * time;
            if (frame > 2) frame -= 2;
            player.setTextureRect(IntRect(31 * int(frame), 64, 31, 32));
        }

        window.clear();
        window.draw(player);
        window.display();
    }
    return 0;
}