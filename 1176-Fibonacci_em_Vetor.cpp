#include <iostream>

using namespace std;

int main() {
	int N, X;
	long long unsigned int V[61];
	V[0] = 0;
	V[1] = 1;
	for(int j = 2; j < 61; j++) {
		V[j] = V[j - 1] + V[j - 2];
	}
	cin >> N;
	for(int i = 0; i < N; i++) {
		cin >> X;
		cout << "Fib(" << X << ") = " << V[X] << endl;
	}
	return 0;
}
