#ifndef VECTOR2_H
#define VECTOR2_H


class Vector2 {
 public:
  Vector2();
  Vector2(float x, float y);

  float GetX() { return x_; }
  float GetY() { return y_; }

 private:
  float x_;
  float y_;
};

#endif  // VECTOR2_H
