#ifndef JKTROUGAO
#define JKTROUGAO
#include "Trougao.hpp"

class JKTrougao : public Trougao
{
	public:
		JKTrougao() : Trougao(1, 1, 2) {} 
		JKTrougao(double osnovica, double krak) : Trougao(krak, krak, osnovica) {}
		JKTrougao(const JKTrougao &t) : Trougao(t.a, t.b, t.c) {} 
};

#endif 
