#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
    float X1, Y1, X2, Y2;
	cin >> X1 >> Y1 >> X2 >> Y2;
	cout << fixed << setprecision(4);
	cout << sqrt(pow((X1 - X2), 2) + pow((Y1 - Y2), 2))<< endl; 
	return 0;
}