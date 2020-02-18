#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

	float S = 0, X, a = 2;
	int mn;
	while(true)
	{
		if(a > 0)
		{
			cin >> X;
			if(X >= 0 && X <= 10)
			{
				S += X;
				a--;
			}
			else
			{
				cout << "nota invalida" << endl;
			}
		}
		else
		{
			if(a == 0)
			{
				cout << "media = " << S / 2 << endl;
				S = 0;
				a = -1;
			}
			else
			{
				cout << fixed << setprecision(2);
				cout << "novo calculo (1-sim 2-nao)" << endl;
				cin >> mn;
				if(mn == 1)
				{
					a = 2;
				}
				else if(mn == 2)
				{
					break;
				}
			}

		}
	}
	return 0;
}
