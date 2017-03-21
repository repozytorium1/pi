#ifndef jednomian_h
#define jednomian_h

#include <iostream>

using namespace std;

class Jednomian{
  int wartosc;
  int potega;
  public:
  Jednomian(int=0,int=0);
  ~Jednomian();
  void show();
  void change(int);
  void change(int,int);
  int znak();
  int w();
};


#include "jednomian.cpp"


#endif
