#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

#include "particle.h"
#include "math/vector2.h"


int main(int argc, char** argv) {
  // Create particle
  Particle particle_0;
  particle_0.position_ = Vector2(100, 100);

  // System & graphics code
  sf::RenderWindow window;
  sf::Event event;
  window.create(sf::VideoMode(800, 800), "Game App");
  sf::CircleShape particle_graphic(10);
  while (window.isOpen()) {
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed) {
        window.close();
      }
    }
    window.clear();
    Vector2 particle_pos = particle_0.position_;
    particle_graphic.setPosition(sf::Vector2f(particle_pos.GetX(), particle_pos.GetY()));
    window.draw(particle_graphic);
    window.display();
  }

  return 0;
}
