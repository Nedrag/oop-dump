#ifndef JSTROUGAO
#define JSTROUGAO

class JSTrougao : public JKTrougao
{
	public:
		JSTrougao(): JKTrougao(1, 1) {}
		JSTrougao(double a) : JKTrougao(a, a) {}
		JSTrougao(const JSTrougao &t) : JKTrougao(t.a, t.a) {}
};

#endif 
