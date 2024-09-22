// Lab_04_1.cpp
// ћалаховський Ќазар
// Ћабораторна робота є 4.1
// ÷икли
// ¬ар≥ант 20


#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int k, N, i;
	double S;
	cout << "k = "; cin >> k;
	cout << "N = "; cin >> N;
	S = 0;
	i = k;
	
	double sinCos = sin(1. * i) * cos(1. * i);
	double cosPlusOne = 1 + cos(1. * i) * cos(1. * i);

	// 1) while(Е) { Е }
	while (i <= N)
	{
		S += sinCos / cosPlusOne;
		i++;
	}
	cout << S << endl;
	S = 0;
	i = k;

	// 2) do{ Е } while(Е);
	do {
		S += sinCos / cosPlusOne;
		i++;
	} while (i <= N);
	cout << S << endl;
	S = 0;

	// 3) for (Е; Е; n++) { Е }
	for (i = k; i <= N; i++)
	{
		S += sinCos / cosPlusOne;
	}
	cout << S << endl;
	S = 0;

	// 4) for(Е; Е; n--) {Е }
	for (i = N; i >= k; i--)
	{
		S += sinCos / cosPlusOne;
	}
	cout << S << endl;
	return 0;
}