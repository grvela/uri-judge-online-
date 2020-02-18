#include <iostream>

using namespace std;

int main() {
	int X, S = 0, i = 0;
	while(true) {
		cin >> X;
		if (X == 0) break;
		do {
			if(X % 2 == 0) {
				S += X;
				X += 1;
				i++;
			}else X++;
		} while(i != 5);
		cout << S << endl;
		S = 0;
		i = 0;
	}
	return 0;
}
