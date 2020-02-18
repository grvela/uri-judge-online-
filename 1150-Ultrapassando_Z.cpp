#include <iostream>
using namespace std;
int main()
{
    int X, Z , S = 0, num = 0;
    cin >> X;
    do
    {
    cin >> Z;
	}while(Z <= X);
	while(S < Z)
	{
		S += X;
		X++;
		num++;
	}
	cout << num << endl;
	return 0;
}
