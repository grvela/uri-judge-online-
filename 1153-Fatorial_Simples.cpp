#include <iostream>
using namespace std;
int main()
{
    int N, F = 1;
    cin >> N;
	for(int i = 1; i <= N; i++)	{
    F = F*i;
	}
	cout << F << endl;
	return 0;
}
