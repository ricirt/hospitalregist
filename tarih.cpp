
#include "tarih.h"
#include<iostream>

using namespace std;


Tarih::Tarih(int _yil)
{
	yil = _yil;
}
int Tarih::getG�n()const
{
	return g�n;
}
int Tarih::getAy()const
{
	return ay;
}
int Tarih::getY�l()const
{
	return yil;
}
void Tarih::setG�n(int _g�n)
{
	g�n = _g�n;
}
void Tarih::setAy(int _ay)
{
	ay = _ay;
}
void Tarih::setY�l(int _yil)
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
//	g�n = _g�n;
//	y�l = _y�l;
//
//	cout << "Date object constructor for date ";
//	print();
//	cout << endl;
//}
//void Tarih::print()const
//{
//	cout << g�n << "/" << ay << "/" << y�l << endl;
//
//}
//
//Tarih::~Tarih()
//{
//	cout << "Date object destructor for date ";
//	print();
//	cout << endl;
//}
//int Tarih::G�nKontrol(int testDay) const
//{
//	static const int BirAydakiG�nSayisi[12 + 1] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	if (testDay > 0 && testDay <= BirAydakiG�nSayisi[ay])
//		return testDay; // February 29 check for leap year 
//	if (ay == 2 && testDay == 29 && (y�l % 400 == 0 || (y�l % 4 == 0 && y�l % 100 != 0)))
//		return testDay;
//	cout << "Invalid day (" << testDay << ") set to 1.\n";
//	return 1; // leave object in consistent state if bad value 
//} 