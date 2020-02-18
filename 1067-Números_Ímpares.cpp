#include <iostream>
using namespace std;
int main()
{
	int n, impar = 0;
	cin >> n;
	while(n < 1 || n > 1000) cin >> n;
	for(int i = 1; i <= n; i++)
	{
		if( i % 2 > 0) cout << i << endl;
	}
	return 0;
}
