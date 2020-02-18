#include <iostream>
using namespace std;
int main()
{
	int A, N, S = 0;
	cin >> A >> N;
	while(N <= 0) cin >> N;
	for(int i = 0; i < N; i++) S += A + i;
	cout << S << endl;
	return 0;
}
