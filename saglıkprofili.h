#pragma once
#include"tarih.h"
#include"KalpHizi.h"
 
class Saglikprofili
{
private:
	string cinsiyet;
	double boy, kilo;
	Tarih DogumTarihi;
	KalpHizi Kalpbilgileri;
	double a;
	
public:
	void setboy(double);
	void setkilo(double);
	void setcinsiyet(string &);
	int getboy();
	int getkilo();
	string getcinsiyet();
	double getirKitleIndeksi();
	Saglikprofili(double, double, string , Tarih ,KalpHizi);
	void print();
	

};
