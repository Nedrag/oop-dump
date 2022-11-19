#include <iostream>
#include "radio.hpp"

using namespace std;


void print(const Radio &r)
{
	cout << "--- RADIO ---" << endl;
	cout << "STATE: ";
	switch(r.getState())
	{
		case sON: cout << "ON"; break;
		case sOFF: cout << "OFF"; break;
		case sOUT: cout << "OUT"; break;
		default: cout << "NEPOZNATO STANJE" ; break;

	}

	cout << endl;
	cout <<"FREKVENCIJA: "<< r.getFrec() <<endl;
	cout << "JACINA ZVUKA: " << r.getVol() << endl;



}

char meni()
{
	char c;

	do
		{
			cout << "1. UKLJUCI"  << endl;
	cout << "2. ISKLJUCI"  << endl;
	cout << "3. POPRAVI"  << endl;
	cout << "4. POKVARI"  << endl;
	cout << "5. FREK+"  << endl;
	cout << "6. FREK-"  << endl;
	cout << "7. VOL+"  << endl;
	cout << "8. VOL-"  << endl;
	cout << "9. EXIT"  << endl;
	cin >> c;
	cout << endl;
		}while(c < '1' || c > '9');



	return c;
}
int main()
{
	Radio r;

	cout << "POCETNO STANJE" << endl;
	print(r);

	cout << endl;

	char n;
	do
	{
		n = meni();
		print(r);
		switch(n)
		{
			case '1': r.turnOn() ; break;
			case '2': r.turnOff() ; break;
			case '3': r.repair() ; break;
			case '4': r.turnOut() ; break;
			case '5': r.incF() ; break;
			case '6': r.decF() ; break;
			case '7': r.incV() ; break;
			case '8': r.decV() ; break;

		}


		cout << endl;

	}  while (n != '9');



    return 0;
}
