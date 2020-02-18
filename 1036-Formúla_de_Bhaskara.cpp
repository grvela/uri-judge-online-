#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
	double A, B, C, R1, R2, DELTA;
	cin >> A >> B >> C ;
	DELTA = (pow(B, 2) - (4*A*C));
	if (DELTA >= 0 && A != 0)
	{
		 R1 = (( -B + sqrt(DELTA))/(2*A));
		 R2 = (( -B - sqrt(DELTA))/(2*A));
		 cout << fixed << setprecision(5);
	     cout << "R1 = " << R1 << endl << "R2 = " << R2 << endl;
	}else cout << "Impossivel calcular" << endl;
	return 0;
}