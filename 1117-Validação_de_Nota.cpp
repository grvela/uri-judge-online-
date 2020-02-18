#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float S = 0, X, R = 2;
    while(R != 0)
	{
		cin >> X;
		if(X >= 0 && X <= 10)
		{
			S += X;
			R--;
		}else
		{
			cout << "nota invalida" << endl;
		}
	}
	cout << fixed << setprecision(2);
	cout << "media = " << S/2 << endl;
	return 0;
}
