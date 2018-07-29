
#include "tarih.h"
#include<iostream>

using namespace std;


Tarih::Tarih(int _yil)
{
	yil = _yil;
}
int Tarih::getGün()const
{
	return gün;
}
int Tarih::getAy()const
{
	return ay;
}
int Tarih::getYýl()const
{
	return yil;
}
void Tarih::setGün(int _gün)
{
	gün = _gün;
}
void Tarih::setAy(int _ay)
{
	ay = _ay;
}
void Tarih::setYýl(int _yil)
{
	yil = _yil;
}
void Tarih::printdate()
{
	cout << "dogum tarihi    " << yil << endl;
}











//	if (_ay > 0 && _ay <= BirYildakiAySayisi) // validate the month 
//		ay = _ay;
//	else
//	{
//		ay = 1;
//		 invalid month set to 1
//		cout << "Invalid month (" << _ay << ") set to 1.\n";
//	}
//	gün = _gün;
//	yýl = _yýl;
//
//	cout << "Date object constructor for date ";
//	print();
//	cout << endl;
//}
//void Tarih::print()const
//{
//	cout << gün << "/" << ay << "/" << yýl << endl;
//
//}
//
//Tarih::~Tarih()
//{
//	cout << "Date object destructor for date ";
//	print();
//	cout << endl;
//}
//int Tarih::GünKontrol(int testDay) const
//{
//	static const int BirAydakiGünSayisi[12 + 1] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	if (testDay > 0 && testDay <= BirAydakiGünSayisi[ay])
//		return testDay; // February 29 check for leap year 
//	if (ay == 2 && testDay == 29 && (yýl % 400 == 0 || (yýl % 4 == 0 && yýl % 100 != 0)))
//		return testDay;
//	cout << "Invalid day (" << testDay << ") set to 1.\n";
//	return 1; // leave object in consistent state if bad value 
//} 