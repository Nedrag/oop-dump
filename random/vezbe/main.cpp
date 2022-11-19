#include <iostream>
#include "semafor.hpp"

using namespace std;

//stampanje podataka
void printS(const Semafor &s)
{
	cout << "-----SEMAFORE------"<< endl;
	cout << "BOJA: ";
	switch(s.getColor())
	{
		case cNONE: cout << "NONE" << endl; break;
		case cRED: cout << "CRVENA" << endl; break;
		case cYELLOW: cout << "ZUTA" << endl; break;
		case cREDYELLOW: cout << "NARANDZASTA?" << endl; break;
		case cGREEN: cout << "ZELENA" << endl;break;
		case cBLINK: cout << "TREPERI" << endl; break;
		default: cout << "Doslo je do greske!"; break;

	}
	cout << "STANJE SEMAFORA: ";
	switch(s.getState())
	{
		case sOFF: cout << "ISKLJUCEN" ; break;
		case sON: cout << "UKLJUCEN"; break;
		case sOUT: cout << "POKVAREN" ; break;
		case sBLINK: cout << "TREPERI" ; break;
		default: cout << "Doslo je do greske!"; break;

	}
	cout << endl;
	cout<< '\n' ;

}

char meni()
{
	char in;

	do
	{

	cout << "-----MENI-----" <<endl;
	cout << "1. UKLJUCI" << endl;
	cout << "2. ISKLJUCI" << endl;
	cout << "3. POKVARI" << endl;
	cout << "4. POPRAVI" << endl;
	cout << "5. PROMENI BOJE" << endl;
	cout << "6. UKLJUCI TREPTANJE" << endl;
	cout << "7.EXIT" << endl;
	cin >> in;
	if(in < '1' || in > '7'){cout << "UNESITE VALJAN BROJ!" << endl<< endl<< endl;}
	}while(in < '1' || in > '7');

	return in ;
}

int main()
{

	Semafor s;

	//Ispis i meni
	cout << "POCETNO STANJE " << endl;
	printS(s);
	char c;
	do
	{
	c = meni();

	switch(c)
	{
		case '1' :s.turnOn();printS(s);break;
		case '2' : s.turnOff();printS(s);break;
		case '3' : s.turnOut();printS(s);break;
		case '4' : s.repair();printS(s);break;
		case '5' : s.changeColor();printS(s);break;
		case '6' : s.turnBlink();printS(s);break;


	}

	}while(c != '7');




    return 0;
}
