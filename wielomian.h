#ifndef wielomian_h
#define wielomian_h

#include <iostream>
#include "jednomian.h"


using namespace std;

class Wielomian{
	private:
		Jednomian a1,a2,a3,a4;
	public:
		Wielomian();
		Wielomian(int,int,int,int);
		~Wielomian();
		void show();
		std::ostream & operator<<(Wielomian);
		void change(int,int,int,int);
		Wielomian operator+(Wielomian);
		Wielomian & operator+=(Wielomian);
		Wielomian operator-(Wielomian);
		Wielomian & operator-=(Wielomian);
		Wielomian operator*(int);
		Wielomian & operator*=(int);
		int operator==(Wielomian);
		int operator!=(Wielomian);
};
#include "wielomian.cpp"

#endif
