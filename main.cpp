#include<iostream>
#include"tarih.h"
#include"KalpHizi.h"
#include"saglýkprofili.h"

using namespace std;

void main()
{
	Tarih t(1956);
	KalpHizi k("fatih", "oztemir", t);
	k.GetirYasi();
	k.getirMaksimumKalpHizi();
	k.getirHedefKalpHizi();

	/*k.printkalpbilgileri();*/
	Saglikprofili s(1.74,88, "ERKEK",  1996, k);
	s.getirKitleIndeksi();
	s.print();

	system("pause");
}