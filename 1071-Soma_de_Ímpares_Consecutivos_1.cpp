#include <iostream>
using namespace std;
int main()
{
	int X, Y, maior, menor, soma = 0;
	cin >> X >> Y;
	if(X > Y)
	{
		maior = X;
		menor = Y;
	}else
	{
	    menor = X;
		maior = Y;
	}
	for(int i = menor + 1; i <= maior - 1; i++)
	{
		if(i % 2 == 1 || i % 2 == -1) soma += i;
	}
	cout << soma << endl;
	return 0;
}
