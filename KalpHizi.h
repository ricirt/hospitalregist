#pragma once
#include"tarih.h"
#include<string>
#include<iostream>
#define güncelyil 2018;
#define maxkalphýzý 220;
using namespace std;
class KalpHizi
{
public:
	KalpHizi( string , string , Tarih &);
	void setName(string );//set name
	void setSurname(string );//setsurname
	void setDogumTarihi(Tarih &);
	void setMaxHýz(int);
	void setHedefHýz1(int);
	void setHedefHýz2(int);
	string getName()const;//return name
	string getSurname()const;//return surname
	Tarih getDogumTarihi()const;
	int getHedefHýz1()const;
	int getHedefHýz2()const;
	int getMaxHýz()const;
	void printkalpbilgileri();
	int GetirYasi(); //return yas
	int getirMaksimumKalpHizi();//return max kalp atýs hýzý
	double getirHedefKalpHizi();	// return hedef kalp atýs hýzý

	~KalpHizi();
private:
	string name;
	Tarih DogumTarihi;
	string surname;
	int yas;
	int MaxHiz;
	int HedefHiz1;
	int HedefHiz2;
	
};

