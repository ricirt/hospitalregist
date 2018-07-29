#pragma once
#include "KalpHizi.h"
#include"tarih.h"
#include<string>

using namespace std;
KalpHizi::KalpHizi(string  _name, string  _surname, Tarih & _DogumTarihi)
	:DogumTarihi(_DogumTarihi)
{
	setName(_name);
	setSurname(_surname);
	/*setHedefHýz1(_HedefHiz1);
	setHedefHýz2(_HedefHiz2);
	setMaxHýz(_MaxHiz);*/

}
void KalpHizi::setName(string _name)
{
	name = _name;
}
void KalpHizi::setSurname(string _surname)
{
	surname = _surname;
}
string KalpHizi::getName() const
{
	return name;
}
string KalpHizi::getSurname() const
{
	return surname;
}
Tarih KalpHizi::getDogumTarihi() const
{
	return DogumTarihi;
}
int KalpHizi::GetirYasi()
{	
	int _yas = 2018 - DogumTarihi.getYýl();
	yas = _yas;
	return yas;
}
void KalpHizi::printkalpbilgileri()
{ 
	cout << " name: " << name << endl << " surname: " << surname << endl << " yas: " << yas << endl << "  hedef kalp hizi araligi   " << HedefHiz1 << "  ile   "
		<< HedefHiz2 << "  araligindadir" << endl << "  max kalp hizi " << MaxHiz << endl;
}

int KalpHizi::getirMaksimumKalpHizi()
{

	int _MaxHiz = 220 - yas;
	MaxHiz = _MaxHiz;
	return MaxHiz;
}
double  KalpHizi::getirHedefKalpHizi()
{
	int _HedefHiz1 = MaxHiz * 50 / 100;
	HedefHiz1 = _HedefHiz1;
	int _HedefHiz2 = MaxHiz * 85 / 100;
	HedefHiz2 = _HedefHiz2;
	return HedefHiz1, HedefHiz2;
}
KalpHizi::~KalpHizi()
{

}




//int KalpHizi::getHedefHýz1()const
//{
//	return HedefHiz1;
//}
//int KalpHizi::getHedefHýz2()const
//{
//	return HedefHiz2;
//}
//int KalpHizi::getMaxHýz()const
//{
//	return MaxHiz;}


//void KalpHizi::setHedefHýz1(int _HedefHiz1)
//{
//	HedefHiz1 = _HedefHiz1;
//}
//void KalpHizi::setHedefHýz2(int _HedefHiz2)
//{
//	HedefHiz2 = _HedefHiz2;
//
//}
//void KalpHizi::setMaxHýz(int _MaxHiz)
//{
//	MaxHiz = _MaxHiz;
//}