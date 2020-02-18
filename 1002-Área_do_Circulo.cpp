#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
	double raio, area;
	cin >> raio; 
	area = (pow(raio,2) * 3.14159);
	cout << fixed << setprecision(4);
	cout << "A=" << area << endl;
	return 0;
}