#pragma once
#include<iostream>
using namespace std;
class Tarih {
public: 
	Tarih(int);
	void setGün(int);
	void setAy(int);
	void setYýl(int);
	int getGün()const;
	int getAy()const;
	int getYýl()const;	
	void printdate();
private:
	int yil; 
	int ay; 
	int gün;
	
};