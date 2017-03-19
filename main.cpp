#include <iostream>
#include "wielomian.h"

using namespace std;

int main(){
	cout<<"Witaj w programie obslugujacym wielomiany."<<endl;

	Wielomian a,b,c,d,e;
	//przypisuje wartosci poczatkowe
	a.change(1,1,0,0);
	b.change(1,1,4,4);
	c.change(1,1,3,3);
	d.change(1,9,0,9);
	e.change(0,0,3,1);


	cout<<"Dodawanie____________________________________________"<<endl;
	a=a+b;
	cout<<"Wynik sumy:";
	a.show();
	e=e+e+e+e+e;
	cout<<"Wynik sumy:";
	e.show();
	c+=d;
	cout<<"Wynik sumy:";
	c.show();


	cout<<"Odejmowanie____________________________________________"<<endl;
	a.show();
	b.show();
	a=b-a;
	cout<<"Wynik roznicy:";
	a.show();
	a.show();
	b.show();
	a=a-b-b;
	cout<<"Wynik roznicy:";
	a.show();
	e.show();
	d.show();
	e-=d;
	cout<<"Wynik roznicy:";
	e.show();




	return 0;
}
