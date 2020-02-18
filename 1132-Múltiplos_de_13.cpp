#include <iostream>
using namespace std;
int main()
{
	int X, Y, aux, Soma = 0;
	cin >> X >> Y;
	if(X > Y)
	{
    aux = Y;
    Y = X;
    X = aux;
	}
	for(int i = X; i <= Y; i++)
	{
		if(i % 13 != 0)
		{
			Soma += i;
		}
	}
	cout << Soma << endl;
	return 0;
}
