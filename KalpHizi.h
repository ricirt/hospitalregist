#pragma once
#include"tarih.h"
#include<string>
#include<iostream>
#define g�ncelyil 2018;
#define maxkalph�z� 220;
using namespace std;
class KalpHizi
{
public:
	KalpHizi( string , string , Tarih &);
	void setName(string );//set name
	void setSurname(string );//setsurname
	void setDogumTarihi(Tarih &);
	void setMaxH�z(int);
	void setHedefH�z1(int);
	void setHedefH�z2(int);
	string getName()const;//return name
	string getSurname()const;//return surname
	Tarih getDogumTarihi()const;
	int getHedefH�z1()const;
	int getHedefH�z2()const;
	int getMaxH�z()const;
	void printkalpbilgileri();
	int GetirYasi(); //return yas
	int getirMaksimumKalpHizi();//return max kalp at�s h�z�
	double getirHedefKalpHizi();	// return hedef kalp at�s h�z�

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

