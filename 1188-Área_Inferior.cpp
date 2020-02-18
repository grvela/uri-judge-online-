#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	char Op;
	double M[12][12], Soma = 0;
	int a = 1, b = 10;
	cin >> Op;
	for(int i = 0; i < 12; i++) {
		for(int j = 0; j < 12; j++) {
			cin >> M[i][j];
		}
	}
	for(int i = 11; i >= 7; i--) {
		for(int j = a; j <= b; j++ ) {
			Soma += M[i][j];
		}
		a++;
		b--;
	}
	cout << fixed << setprecision(1);
	if(Op == 'S') {
		cout << Soma << endl;
	} else {
		if(Op == 'M') {
			cout << Soma / 30 << endl;
		}
	}
	return 0;
}
