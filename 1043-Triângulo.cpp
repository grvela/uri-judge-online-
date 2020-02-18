#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
	double A, B, C;
	cin >> A >> B >> C;
	cout << fixed << setprecision(1);
    if(fabs(A - B) < C && (A + B) > C)
	{
		cout << "Perimetro = " << A + B + C << endl;
	}else
	{
	    cout << "Area = " << ((A + B)*C)/ 2 << endl;
	}
	return 0;
}
