#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	string NOM;
	double SL, TV;
	cin >> NOM >> SL >> TV;
	cout << fixed << setprecision(2);
	cout << "TOTAL = R$ " << (SL + (TV* 0.15)) << endl; 
	return 0;
}