#pragma once
#include<iostream>
using namespace std;
class Tarih {
public: 
	Tarih(int);
	void setG�n(int);
	void setAy(int);
	void setY�l(int);
	int getG�n()const;
	int getAy()const;
	int getY�l()const;	
	void printdate();
private:
	int yil; 
	int ay; 
	int g�n;
	
};