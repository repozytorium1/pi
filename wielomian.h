#ifndef wielomian_h
#define wielomian_h

#include <iostream>


using namespace std;

class Wielomian{
	public:
		int z1,z2,z3,z4;
		Wielomian(int=0,int=0,int=0,int=0);
		~Wielomian();
		void show();
		void change(int,int,int,int);
		Wielomian operator+(Wielomian);
		Wielomian & operator+=(Wielomian);
		Wielomian operator-(Wielomian);
		Wielomian & operator-=(Wielomian);
};
#include "wielomian.cpp"

#endif
