#ifndef wielomian_cpp
#define wielomian_cpp

#include <iostream>
#include "wielomian.h"

using namespace std;

Wielomian::Wielomian(int a,int b ,int c,int d){
  z1=a;
  z2=b;
  z3=c;
  z4=d;
}
Wielomian::~Wielomian(){
  cout<<"Destruktor pozbyl sie obiektu"<<endl;
}

void Wielomian::show(){
  cout<<z1<<"*x^3+"<<z2<<"*x^2+"<<z3<<"*x+"<<z4<<endl;
}


#endif
