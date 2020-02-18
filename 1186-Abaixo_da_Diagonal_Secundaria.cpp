#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int Flag = 11;
	double M[12][12], Soma = 0, Media = 0;
	char Op;
	cin >> Op;
	for(int i = 0; i < 12; i++) {
		for(int j = 0; j < 12; j++) {
			cin >> M[i][j];
			if(j > Flag) {
				Soma += M[i][j];
				Media = Soma;
			}
			if(i == j - Flag) Flag--;
		}
	}
	cout << fixed << setprecision(1);
	if(Op == 'S') {
		cout << Soma << endl;
	} else {
		cout << Media / 66 << endl;
	}
	return 0;
}
