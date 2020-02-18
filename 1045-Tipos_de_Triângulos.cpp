#include <iostream>
using namespace std;
int main()
{
	double v[3], a, b, c;
	int aux, i, j;
	for(int x = 0; x < 3; x++)
	{
		cin >> v[x];
	}
	for(i = 0; i < 3; i++)
	{
		for(j = 2; j >= i + 1; j--)
		{
			if(v[j] > v[j - 1])
			{
				aux = v[j - 1];
				v[j - 1] = v[j];
				v[j] = aux;
			}
		}
	}
	a = v[0];
	b = v[1];
	c = v[2];
	if(a >= (b + c))
	{
		cout << "NAO FORMA TRIANGULO" << endl;
	}
	else
	{
		if((a * a) == ((b*b) + (c*c)))
		{
			cout << "TRIANGULO RETANGULO" << endl;
		}
		else
		{
			if((a * a) > ((b * b) + (c * c)))
			{
				cout << "TRIANGULO OBTUSANGULO" << endl;
			}
			else
			{
				cout << "TRIANGULO ACUTANGULO" << endl;
			}
		}
		if(a == b && b == c)
		{
			cout << "TRIANGULO EQUILATERO" << endl;
		}
		if((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
		{
			cout << "TRIANGULO ISOSCELES" << endl;
		}
	}
	return 0;
}
