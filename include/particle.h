#ifndef PARTICLE_H
#define PARTICLE_H

#include "math/vector2.h"


// Particle Struct
struct Particle {
  Vector2 position_;
  Vector2 velocity_;
  Vector2 force_accum_;
  float inverse_mass_;
  float remaining_life_sec_;
};

#endif  // PARTICLE_H
