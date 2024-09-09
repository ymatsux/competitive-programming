#ifndef PIYO_HPP
#define PIYO_HPP
#include "headers.cpp"

class Piyo {
 public:
  Piyo() {};
  void say_piyo();
};

void Piyo::say_piyo() { cout << "piyo" << endl; }
#endif