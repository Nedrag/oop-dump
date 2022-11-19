#ifndef RADIO_HPP
#define RADIO_HPP

#include <iostream>

using namespace std;

//KONSTANTE
#define MAXF 108
#define MINF 87.5
#define FS 0.5

#define MAXV 20
#define MINV 0
#define VS 1


//stanja
enum states{sOFF, sON, sOUT};

class Radio
{
private:
			states   state;
			double frec;
			double vol;

public:
			Radio()
			{

					state = sOFF ;
					frec = MINF;
					vol = MINV;
			}

			//ukljuciti
			bool turnOn()
			{
				if(state == sOFF)
				{
					state = sON;
					frec = MINF;
					vol = MINV;
					return true;
				}
				return false;
			}

			//iskljucenje
			bool turnOff()
			{
				if(state == sON)
				{
					state = sOFF;
					frec = MINF;
					vol = MINV;
					return true;
				}
				return false;

			}
			 //pokvari
			 bool turnOut()
			 {
			 	if(state != sOUT)
				{
					state = sOUT;
					frec = -1;
					vol = -1;
				}
			 	return false;
			 }
			 //popravi
			 bool repair()
			 {
			 	if(state == sOUT)
				{
					state = sOFF;
					frec = MINF;
					vol = MINV;
					return true;
				}

			 	return false;
			 }
			 bool incF()
			 {
			 	if(state == sON && frec + FS <= MAXF)
				{
					frec += FS;
					return true;
				}
			 	return false;
			 }
			 bool decF()
			 {
			 	if(state == sON && frec -FS >= MINF)
				{
					frec -= FS;
					return true;
				}
			 	return false;
			 }
			  bool incV()
			 {
			 	if(state == sON && vol + VS <= MAXV)
				{
					vol += VS;
					return true;
				}
			 	return false;
			 }
			 bool decV()
			 {
			 	if(state == sON && vol - VS >= MINV)
				{
					vol -= VS;
					return true;
				}
			 	return false;
			 }
			//getteri
			states getState() const
			{

				return state;
			}
			double getFrec() const
			{

				return frec;
			}
			double getVol() const
			{
				return vol;
			}

};


#endif // RADIO_HPP
