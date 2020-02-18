#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	float N, R, P, S;
	cin >> N;
	if( N >= 0 && N <= 400.00) {
		R = N * 0.15;
		S = N + (N * 0.15);
		P = 15;
	}
	if(N > 400.00 && N <= 800.00) {
		R = N * 0.12;
		S = N + (N * 0.12);
		P = 12;
	}
	if(N > 800.00 && N <= 1200.00) {
		R = N * 0.10;
		S = N + (N * 0.10);
		P = 10;
	}
	if(N > 1200.00 && N <= 2000.00) {
		R = N * 0.07;
		S = N + (N * 0.07);
		P = 7;
	}
	if(N > 2000.00) {
		R = N * 0.04;
		S = N + (N * 0.04);
		P = 4;
	}
	cout << fixed << setprecision(2);
	cout << "Novo salario: " << S << endl;
	cout << "Reajuste ganho: " << R << endl;
	cout << "Em percentual: " << int(P) << " %" << endl;
	return 0;
}
