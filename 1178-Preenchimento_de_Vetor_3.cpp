#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double X, N[100];
	cin >> X;
	N[0] = X;
	cout << fixed << setprecision(4);
	cout << "N[" << 0 << "] = " << X << endl;
	for(int i = 1; i < 100; i++) {
		N[i] = (N[i - 1] / 2);
		cout << "N[" << i << "] = " << (N[i]) << endl;
	}
	return 0;
}
