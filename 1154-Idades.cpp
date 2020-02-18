#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int S = 0, N, P = 0;
	while(true)
	{
		cin >> N;
		if(N < 0) break;
		else
		{
		S += N;
		P++;
		}
	}
	cout << fixed << setprecision(2);
	cout << float(S)/float(P) << endl;
	return 0;
}
