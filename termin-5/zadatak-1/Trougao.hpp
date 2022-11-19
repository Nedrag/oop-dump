#ifndef TROUGAO
#define TROUGAO

class Trougao
{
	private:
		double a,b,c;
	public:
		Trougao() { a=3; b =4; c = 5;}
		Trougao(double a, double b, double c) {this->a = a;this->b = b;this->c = c;}
		Trougao(const Trougao &t) {a = t.a ; b = t.b; c =t.c}
		
		double getA() const { return a;}
		double getB() const { return b;}
		double getC() const { return c;}

		void setA(double a) { this->a = a;}
		void setB(double b) { this->b = b;}
		void setC(double c) { this->c = c;}


};

#endif 
