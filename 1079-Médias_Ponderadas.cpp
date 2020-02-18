#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int N;
	float X , Y, Z, R;
    cin >> N;
    cout << fixed << setprecision(1);
    for(int i = 0; i < N; i++)
	{
		cin >> X >> Y >> Z;
		R = (X*2 + Y*3 + Z*5)/10;
		cout << R << endl;
	}
	return 0;
}
