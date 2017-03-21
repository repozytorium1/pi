#ifndef wielomian_cpp
#define wielomian_cpp

#include <iostream>
#include "wielomian.h"

using namespace std;

Wielomian::Wielomian(){
  this->a1.change(0,3);
  this->a2.change(0,2);
  this->a3.change(0,1);
  this->a4.change(0,0);
  cout<<"Powoluje obiekt: ";
  this->show();
  cout<<endl;
}

Wielomian::Wielomian(int a,int b,int c,int d){
  this->a1.change(a,3);
  this->a2.change(b,2);
  this->a3.change(c,1);
  this->a4.change(d,0);
  cout<<"Powoluje obiekt: ";
  this->show();
  cout<<endl;
}

Wielomian::~Wielomian(){
  cout<<"Destruktor pozbyl sie obiektu: ";
  this->show();
  cout<<endl;
}

void Wielomian::show(){
  if(a1.znak()!=0){
     a1.show();
  }
  if(a2.znak()!=0){
     if(a2.znak()>0&&a1.znak()!=0)
       cout<<"+";
     a2.show();
  }
  if(a3.znak()!=0){
     if(a3.znak()>0&&(a1.znak()!=0||a2.znak()!=0))
       cout<<"+";
     a3.show();
  }
  if(a4.znak()!=0){
     if(a4.znak()>0&&(a1.znak()!=0||a2.znak()!=0||a3.znak()!=0))
       cout<<"+";
     a4.show();
  }
  if(a1.znak()==0&&a2.znak()==0&&a3.znak()==0&&a4.znak()==0)
  cout<<0;
}

std::ostream & operator<<(std::ostream &o,Wielomian &a){
  a.show();
  return o<<" ";
}

void Wielomian::change(int a,int b,int c,int d){
  cout<<"Zmiana obiektu: ";
  this->show();
  cout<<" ";
  this->a1.change(a);
  this->a2.change(b);
  this->a3.change(c);
  this->a4.change(d);
  cout<<"na: ";
  this->show();
  cout<<endl;
}

Wielomian Wielomian::operator+(Wielomian a){
  Wielomian t;
  t.a1.change(this->a1.w()+a.a1.w());
  t.a2.change(this->a2.w()+a.a2.w());
  t.a3.change(this->a3.w()+a.a3.w());
  t.a4.change(this->a4.w()+a.a4.w());
  return Wielomian(t);
}

Wielomian & Wielomian::operator+=(Wielomian a){
  this->a1.change(this->a1.w()+a.a1.w());
  this->a2.change(this->a2.w()+a.a2.w());
  this->a3.change(this->a3.w()+a.a3.w());
  this->a4.change(this->a4.w()+a.a4.w());
  return*this;
}

Wielomian Wielomian::operator-(Wielomian a){
  Wielomian t;
  t.a1.change(this->a1.w()-a.a1.w());
  t.a2.change(this->a2.w()-a.a2.w());
  t.a3.change(this->a3.w()-a.a3.w());
  t.a4.change(this->a4.w()-a.a4.w());
  return Wielomian(t);
}

Wielomian & Wielomian::operator-=(Wielomian a){
  this->a1.change(this->a1.w()-a.a1.w());
  this->a2.change(this->a2.w()-a.a2.w());
  this->a3.change(this->a3.w()-a.a3.w());
  this->a4.change(this->a4.w()-a.a4.w());
  return*this;
}

Wielomian Wielomian::operator*(int a){
  Wielomian t;
  t.a1.change(this->a1.w()*a);
  t.a2.change(this->a2.w()*a);
  t.a3.change(this->a3.w()*a);
  t.a4.change(this->a4.w()*a);
  return Wielomian(t);
}

Wielomian & Wielomian::operator*=(int a){
  this->a1.change(this->a1.w()*a);
  this->a2.change(this->a2.w()*a);
  this->a3.change(this->a3.w()*a);
  this->a4.change(this->a4.w()*a);
  return*this;
}

int Wielomian::operator==(Wielomian a){
  if(this->a1.w()==a.a1.w()&&this->a2.w()==a.a2.w()&&this->a3.w()==a.a3.w()&&this->a4.w()==a.a4.w())
  return 1;
  return 0;
}

int Wielomian::operator!=(Wielomian a){
  if(this->a1.w()==a.a1.w()&&this->a2.w()==a.a2.w()&&this->a3.w()==a.a3.w()&&this->a4.w()==a.a4.w())
  return 0;
  return 1;
}

#endif
