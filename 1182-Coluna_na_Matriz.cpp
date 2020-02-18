#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double M[12][12], S = 0, m = 0;
	int L, i, k;
	char O;
	cin >> L >> O;
	for(i = 0; i < 12; i++){
		for(k = 0; k < 12; k++){
			cin >> M[i][k];
		}
	}
	for(int j = 0; j < 12; j++) {
		cin >> M[j][L];
		if(O == 'S') {
			S += M[j][L];
		} else {
			m += M[j][L];
		}
	}
	cout << fixed << setprecision(1);
	if(O == 'S') {
		cout << S << endl;
	} else {
		cout << m / 12 << endl;
	}
	return 0;
}
