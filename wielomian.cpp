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
  cout<<"Powoluje obiekt:";
  this->show();
}
Wielomian::~Wielomian(){
  cout<<"Destruktor pozbyl sie obiektu:";
  this->show();
}

void Wielomian::show(){
  if(z1!=0){
     cout<<z1<<"*x^3";
  }
  if(z2!=0){
     if(z2>0){
       if(z1!=0)
       cout<<"+"<<z2<<"*x^2";
       else
       cout<<z2<<"*x^2";
     }
     else
     cout<<z2<<"*x^2";
  }
  if(z3!=0){
     if(z3>0){
       if(z1!=0||z2!=0)
       cout<<"+"<<z3<<"*x";
       else
       cout<<z3<<"*x";
     }
     else
     cout<<z3<<"*x";
  }
  if(z4!=0){
     if(z4>0){
       if(z1!=0||z2!=0||z3!=0)
       cout<<"+"<<z4;
       else
       cout<<z4;
     }
     else
     cout<<z4;
  }
  if(z1==0&&z2==0&&z3==0&&z4==0)
  cout<<0;
  cout<<endl;
}

void Wielomian::change(int a,int b,int c,int d){
  cout<<"Zmiana obiektu:";
  this->show();
  this->z1=a;this->z2=b;this->z3=c;this->z4=d;
  cout<<"na:";
  this->show();
}

Wielomian Wielomian::operator+(Wielomian a){
  return Wielomian(this->z1+a.z1,this->z2+a.z2,this->z3+a.z3,this->z4+a.z4);
}

Wielomian & Wielomian::operator+=(Wielomian a){
  this->z1+=a.z1;
  this->z2+=a.z2;
  this->z3+=a.z3;
  this->z4+=a.z4;
  return*this;
}

Wielomian Wielomian::operator-(Wielomian a){
  return Wielomian(this->z1-a.z1,this->z2-a.z2,this->z3-a.z3,this->z4-a.z4);
}

Wielomian & Wielomian::operator-=(Wielomian a){
  this->z1-=a.z1;
  this->z2-=a.z2;
  this->z3-=a.z3;
  this->z4-=a.z4;
  return*this;
}

#endif
