#include"saglýkprofili.h"
#include"KalpHizi.h"
#include"tarih.h"
#include<iostream>
using namespace std;

Saglikprofili::Saglikprofili(double _boy,double _kilo,string _cinsiyet,Tarih  _Dogumtarihi,KalpHizi _Kalpbilgileri):DogumTarihi(_Dogumtarihi),Kalpbilgileri(_Kalpbilgileri)
{
	setkilo(_kilo);
	setboy(_boy);
	setcinsiyet(_cinsiyet);
}
void Saglikprofili::setkilo(double _kilo)
{
	kilo = _kilo;
}
void Saglikprofili::setboy(double _boy)
{
	boy = _boy;
}
void Saglikprofili::setcinsiyet(string &_cinsiyet)
{
	cinsiyet = _cinsiyet;
}
int Saglikprofili::getboy()
{
	return boy;
}
int Saglikprofili::getkilo()
{
	return kilo;
}
string Saglikprofili::getcinsiyet()
{
	return cinsiyet;
}
double Saglikprofili::getirKitleIndeksi()
{	
	double _a = kilo / (boy*boy);
	a = _a;
	return a;
}
void Saglikprofili::print()
{
	Kalpbilgileri.printkalpbilgileri();
	cout << "Boy " << boy << endl << " Kilo " << kilo << endl << " Cinsiyet  " << cinsiyet << endl << " Vücut kitle indeksi  " << a << endl;
}