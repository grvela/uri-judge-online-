#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double T, V;
	cin >> T >> V;
	cout << fixed << setprecision(3);
    cout << ((V*T)/12) << endl;
    return 0;
}