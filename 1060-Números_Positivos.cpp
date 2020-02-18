#include <iostream>
using namespace std;
int main()
{
	double a, aux = 0;
	for(int i = 1; i <= 6; i++ )
	{
		cin >> a;
		if(a > 0) aux++;
	}
    cout << aux << " valores positivos" << endl;
	return 0;
}
