#include <iostream>
using namespace std;
int main()
{
	int X, Y, aux;
	cin >> X >> Y;
	if(X > Y)
	{
    aux = Y;
    Y = X;
    X = aux;
	}
	for(int i = X + 1; i < Y; i++)
	{
		if(i % 5 == 2 || i % 5 == 3)
		{
			cout << i << endl;
		}
	}
	return 0;
}
