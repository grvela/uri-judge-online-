#include <iostream>
using namespace std;
int main() {
	int X[10];
	cin >> X[0];
	cout << "N[" << 0 << "] = " << X[0] << endl;
	for(int i = 1; i < 10; i++) {
		X[i]  = X[i - 1] * 2;
		cout << "N[" << i << "] = " << X[i] << endl;
	}
	return 0;
}
