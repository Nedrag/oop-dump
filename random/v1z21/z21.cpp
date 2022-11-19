#include <iostream>


using namespace std;

void unos(int** a, int n)
{

	for(int i = 0; i < n ; i++)
	{

		for(int j = 0; j < n ; j++)
		{

			cout << "a[" << i<<"]" << "[" << j << "]: ";
			cin >> *(*(a+i) + j) ;
		}
	}
}

void ispis(int **a,int  n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cout << "a[" << i<<"]" << "[" << j << "]: ";
			cout <<  *(*(a+i) + j) << endl ;
		}
	}
}
int main()
{
	//Unosenje duzine niza
	int n;
	cout << "Unesite duzinu niza: "<< endl;
	cin >> n;

	int** a = new (nothrow) int*[n];

	if(a  == nullptr)
	{
		cout << "Null!" << endl;
		return 0;
	}
	unos(a, n);

	ispis(a, n);

	for(int i =0; i < n; i++)
	{

		delete[] a[i];
	}
	delete[] a;
	return 0;
}
