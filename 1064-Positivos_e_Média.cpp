#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	int numps = 0;
	float v[6], media;
	for(int i = 0; i < 6; i++)
	{
		cin >> v[i];
		if(v[i] >= 0)
		{
		 numps++;
		 media += v[i];
		}
	}
	cout << numps << " valores positivos" << endl;
	cout << fixed << setprecision(1);
	cout << media/numps << endl;
	return 0;
} 
