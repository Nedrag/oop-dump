#ifndef SEMAFOR_DEF
#define SEMAFOR_DEF

//libs
#include <iostream>

//stanja
enum state{sOFF, sON, sOUT, sBLINK};

//boje semafora
enum colors{cRED, cNONE, cYELLOW, cREDYELLOW, cGREEN, cBLINK};

class Semafor
{
private:
		state stanjeS;
		colors bojaS;

public:

		//Prazan konstruktor
		Semafor()
		{
			stanjeS = sOFF;
			bojaS = cNONE;

		}
		//Metode

		//Iskljucenje
		bool turnOff()
		{
			if(stanjeS == sBLINK || stanjeS == sON)
			{
				stanjeS = sOFF;
				bojaS = cNONE;

				return true;
			}
			return false;
		}
		//Ukljucenje
		bool turnOn()
		{
			if(stanjeS == sOFF)
			{
				stanjeS = sON;
				bojaS = cRED;
				return true;
			}
			return false;

		}
		 //blinkovanje
		bool turnBlink()
		{
			if(stanjeS == sOFF)
			{
				stanjeS = sBLINK;
				bojaS = cBLINK;
				return true;
			}
			return false;
		}
		//pokvari
		bool turnOut()
		{
			if(stanjeS != sOUT)
			{
				stanjeS = sOUT;
				bojaS = cNONE;
				return true;
			}
			return false;

		}
		//popravi
		bool repair()
		{
			if(stanjeS == sOUT)
			{
				stanjeS = sOFF;
				bojaS = cNONE;
				return true;

			}
			return false;

		}
		//menjanje boje semafora
		bool changeColor()
		{
			switch(bojaS)
			{
				case cRED: bojaS = cREDYELLOW; break;
				case cREDYELLOW : bojaS = cGREEN; break;
				case cGREEN: bojaS = cYELLOW; break;
				case cYELLOW: bojaS = cRED; break;
				default: return false;
			}

			return true;


		}
	//Getters
		state getState() const
		{
			return stanjeS;
		}

		colors getColor() const
		{
			return bojaS;
		}




};








#endif // SEMAFOR_DEF
