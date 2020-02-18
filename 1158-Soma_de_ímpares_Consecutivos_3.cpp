#include <iostream>

using namespace std;

int main() {
	int N, S = 0;
	int X, Y;
	cin >> N;
	for(int i = 0; i < N; i++) {
		cin >> X >> Y;
		do
		{
			if(X % 2 != 0)
			{
				S += X;
				Y--;
			}
			X++;
		}while(Y != 0);
		cout << S << endl;
		S = 0;
	}
	return 0;
}
