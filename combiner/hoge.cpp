#ifndef HOGE_HPP
#define HOGE_HPP

#include "headers.cpp"
#include "piyo.cpp"

class Hoge {
 public:
  Hoge() {};
  void say_hoge();
  void say_piyo();
};

void Hoge::say_hoge() { cout << "hoge" << endl; }

void Hoge::say_piyo() {
  Piyo piyo = Piyo();
  piyo.say_piyo();
}
#endif