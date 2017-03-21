#ifndef jednomian_cpp
#define jednomian_cpp

#include <iostream>
#include "jednomian.h"

using namespace std;

  Jednomian::Jednomian(int a, int b){
    wartosc=a;
    potega=b;
    cout<<"Powoluje obiekt klasy pomocniczej: ";
    this->show();
    cout<<endl;
  }

  Jednomian::~Jednomian(){
    cout<<"Destruktor pozbyl sie obiektu klasy pomocniczej: ";
    this->show();
    cout<<endl;
  }

  void Jednomian::show(){
    if(this->wartosc!=0){
      if(this->potega>1){
        cout<<wartosc<<"*x^"<<potega;
      }
      else if(this->potega==1){
        cout<<wartosc<<"*x";
      }
      else
        cout<<wartosc;
    }
    else{
      cout<<"0";
    }
  }

  void Jednomian::change(int a){
      cout<<"Zmieniam obiekt klasy pomocniczej: ";
      this->show();
      this->wartosc=a;
      cout<<" na ";
      this->show();
      cout<<endl;
  }

  void Jednomian::change(int a, int b){
    if(b>=0&&b<=3){
      cout<<"Zmieniam obiekt klasy pomocniczej: ";
      this->show();
      this->wartosc=a;
      this->potega=b;
      cout<<" na ";
      this->show();
      cout<<endl;
    }
    else{
      cout<<"blednie podane dane, nic nie uleglo zmianie"<<endl;
    }
  }

  int Jednomian::znak(){
    if(this->wartosc>0)
    return 1;
    else if(this->wartosc<0)
    return -1;
    else
    return 0;
  }

  int Jednomian::w(){
    return this->wartosc;
  }






#endif
