#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int Flag = 11, a = 0, b = 1 , aux = 1;
	double M[12][12], Soma = 0, Media = 0;
	char Op;
	cin >> Op;
	for(int i = 0; i < 12; i++) {
		for(int j = 0; j < 12; j++) {
			cin >> M[i][j];
		}
	}
	while( a != 5) {
		while(b != Flag) {
			Soma += M[a][b];
			Media = Soma;
			b++;
		}
        aux++;
		Flag--;
		a++;
		b = aux;;
	}
	cout << fixed << setprecision(1);
	if(Op == 'S') {
		cout << Soma << endl;
	} else {
		cout << Media / 30 << endl;
	}
	return 0;
}

