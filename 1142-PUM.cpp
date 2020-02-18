#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int N, k = 1;
	cin >> N;
	for(int i = 1; i <= N; i++)
	{
		printf("%i %i %i PUM\n", k, k+1, k+2);
		k += 4;
	}
	return 0;
}
