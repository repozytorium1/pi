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


	cout<<endl<<"Dodawanie____________________________________________"<<endl;
	cout<<endl<<"Obliczanie sumy "<<a<<"i "<<b<<endl;
	a=a+b;
	cout<<"Wynik tej sumy to: "<<a<<endl;
	cout<<endl<<"Obliczanie sumy "<<e<<"i "<<e<<"i "<<e<<"i "<<e<<"i "<<e<<endl;
	e=e+e+e+e+e;
	cout<<"Wynik tej sumy to: "<<e<<endl;
	cout<<endl<<"Obliczanie sumy "<<a<<"i "<<e<<endl;
	a+=e;
	cout<<"Wynik tej sumy to: "<<a<<endl;

	cout<<endl<<"Odejmowanie____________________________________________"<<endl;
	cout<<endl<<"Obliczanie roznicy "<<a<<"i "<<b<<endl;
	a=a-b;
	cout<<"Wynik tej roznicy to: "<<a<<endl;
	cout<<endl<<"Obliczanie roznicy "<<a<<"i "<<b<<"i "<<b<<endl;
	a=a-b-b;
	cout<<"Wynik tej roznicy to: "<<a<<endl;
	cout<<endl<<"Obliczanie roznicy "<<a<<"i "<<b<<endl;
	a-=b;
	cout<<"Wynik tej roznicy to: "<<a<<endl;

	cout<<endl<<"Porownywanie____________________________________________"<<endl;
	cout<<endl<<"Porowuje "<<a<<"i "<<b<<endl;
	if(a==b)
	cout<<"Takie same"<<endl;
	else
	cout<<"Inne"<<endl;
	cout<<endl<<"Porowuje "<<d<<"i "<<d<<endl;
	if(d==d)
	cout<<"Takie same"<<endl;
	else
	cout<<"Inne"<<endl;
	cout<<endl<<"Porowuje "<<c<<"i "<<e<<endl;
	if(c!=e)
	cout<<"Inne"<<endl;
	else
	cout<<"Takie same"<<endl;

	int x,y,z;
	x=10;y=3;z=0;
	cout<<endl<<"Mnozenie____________________________________________"<<endl;
	cout<<endl<<"Mnoze "<<a<<"przez "<<x<<endl;
	a=a*x;
	cout<<"Wynik mnozenia to: "<<a<<endl;
	cout<<endl<<"Mnoze "<<b<<"przez "<<z<<endl;
	b=b*z;
	cout<<"Wynik mnozenia to: "<<b<<endl;
	cout<<endl<<"Mnoze "<<c<<"przez "<<y<<endl;
	c*=y;
	cout<<"Wynik mnozenia to: "<<c<<endl;


	cout<<endl;
	return 0;
}
