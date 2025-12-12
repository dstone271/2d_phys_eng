#ifndef PARTICLE_EMITTER_H
#define PARTICLE_EMITTER_H

#include "particle.h"


class ParticleEmitter {
 public:
  void Update(float elapsed_time);
  void SetPosition(float x_val, float y_val);
  void SetVelocity(float x_val, float y_val);
  void SetOrientation(float x_val, float y_val);
  void SetSize(float x_val, float y_val);

 private:
  sf::Vector2f position_ {};
  sf::Vector2f velocity_ {};
  float max_speed_ {300};
  float rotation_speed_ {90};
  float particle_speed_ {450};
  float burst_speed_ {150};
  int nr_child_particles_ {9};
  sf::Vector2f orientation_ {};
  std::vector<Particle> particle_list_ {};

  void SpawnChildParticles(Particle parent_particle);
};

#endif // PARTICLE_EMITTER_H
