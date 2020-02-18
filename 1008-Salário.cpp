#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int NUM;
	float HR, SL;
	cin >> NUM >> HR >> SL;
	cout << fixed << setprecision(2);
	cout << "NUMBER = "<< NUM << endl;
	cout << "SALARY = U$ " << HR*SL << endl; 
	return 0;
}