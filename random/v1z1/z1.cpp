#include <iostream>

using namespace std;
 enum vrsta_sort{RASTUCE, OPADAJUCE};

 void unos(int* a, int n)
 {
 	for (int i = 0; i < n; i++)
	{

		cout << "a[" << i << "]:";
		cin >> *(a + i);
	}

 }

 void sortiraj(int *a , int n, vrsta_sort vs)
 {
 	int temp;
 	if(vs == RASTUCE)
	{
		for(int i = 0; i < n; i++)
		{
			for(int j = i + 1; j < n; j++)
			{
				if(*(a + i) > *(a + j)){

							temp = *(a + j);
							*(a + j)  = *(a + i);
							*(a + i) = temp;

				}

			}
		}
	}
	else
	{
		   		for(int i = 0; i < n; i++)
		{
			for(int j = i + 1; j < n; j++)
			{
				if(*(a + i) < *(a + j)){
											 //SELECTION SORT
							temp = *(a + j);
							*(a + j)  = *(a + i);
							*(a + i) = temp);

				}

			}
		}
	}
 }

 void ispis(int * a, int n)
 {

 	for(int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: " << *(a + i)<< endl;
	}
 }
int main()
{
	int n;
	cout << "Unesite duzinu niza.";
	cin >> n;

	int* a = new int[n];

	vrsta_sort vs = RASTUCE;


	unos(a , n);
	sortiraj(a, n, vs);
	ispis(a, n);


	delete[] a;


	return 0;
}
