#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double A, V[7] = {100, 50, 20, 10, 5, 2, 1};
	cin >> A;
	cout << A << endl;
	for(int i = 0; i < 7; i++)
	{
		if(V[i] <= A)
		{
        cout << int(A / V[i]) << " nota(s) de R$ " << V[i] << ",00" << endl;
        A = fmod(A, V[i]);
		}else cout << "0 nota(s) de R$ " << V[i] << ",00"<< endl;
	}
    return 0;
}