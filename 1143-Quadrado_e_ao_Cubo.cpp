#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int N;
	cin >> N;
	for(int i = 1; i <= N; i++)
	{
		printf("%i %i %i\n", i, i*i, i*i*i);
	}
	return 0;
}
