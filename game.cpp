
#include <SFML/Graphics.hpp>
#include <ctime>
#include <cstdlib>
#include <vector>


using namespace sf;

// Window settings
const int WINDOW_WIDTH = 400;
const int WINDOW_HEIGHT = 600;

// Car settings
const float CAR_WIDTH = 50;
const float CAR_HEIGHT = 100;
const float CAR_SPEED = 5.0f;

// Obstacle settings
const float OBSTACLE_WIDTH = 50;
const float OBSTACLE_HEIGHT = 100;
const float OBSTACLE_SPEED = 4.0f;
const int OBSTACLE_SPAWN_INTERVAL = 100; // Frames before spawning a new obstacle

int main() {
    srand(static_cast<unsigned>(time(0)));

    // Create game window
    RenderWindow window(VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Car Racing Game");

    // Load car texture
    Texture carTexture;
    if (!carTexture.loadFromFile("car.png")) {
        return -1;  // Check if texture exists
    }
    Sprite car(carTexture);
    car.setScale(CAR_WIDTH / carTexture.getSize().x, CAR_HEIGHT / carTexture.getSize().y);
    car.setPosition(WINDOW_WIDTH / 2 - CAR_WIDTH / 2, WINDOW_HEIGHT - CAR_HEIGHT - 20);

    // Load obstacle texture
    Texture obstacleTexture;
    if (!obstacleTexture.loadFromFile("obstacle.png")) {
        return -1;
    }

    std::vector<Sprite> obstacles;
    int frameCount = 0;
    int score = 0;

    // Game loop
    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed)
                window.close();
        }

        // Car movement
        if (Keyboard::isKeyPressed(Keyboard::Left) && car.getPosition().x > 0) {
            car.move(-CAR_SPEED, 0);
        }
        if (Keyboard::isKeyPressed(Keyboard::Right) && car.getPosition().x < WINDOW_WIDTH - CAR_WIDTH) {
            car.move(CAR_SPEED, 0);
        }

        // Spawn obstacles
        if (frameCount % OBSTACLE_SPAWN_INTERVAL == 0) {
            Sprite obstacle(obstacleTexture);
            obstacle.setScale(OBSTACLE_WIDTH / obstacleTexture.getSize().x, OBSTACLE_HEIGHT / obstacleTexture.getSize().y);
            obstacle.setPosition(rand() % (WINDOW_WIDTH - static_cast<int>(OBSTACLE_WIDTH)), -OBSTACLE_HEIGHT);
            obstacles.push_back(obstacle);
        }
        frameCount++;

        // Move obstacles
        for (size_t i = 0; i < obstacles.size(); i++) {
            obstacles[i].move(0, OBSTACLE_SPEED);

            // Collision detection
            if (car.getGlobalBounds().intersects(obstacles[i].getGlobalBounds())) {
                window.close();  // Game Over
            }

            // Remove obstacles that go off screen
            if (obstacles[i].getPosition().y > WINDOW_HEIGHT) {
                obstacles.erase(obstacles.begin() + i);
                score++;
            }
        }

        // Render everything
        window.clear(Color::Black);
        window.draw(car);
        for (const auto& obs : obstacles)
            window.draw(obs);

        window.display();
    }

    return 0;
}

