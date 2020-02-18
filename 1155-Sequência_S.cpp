#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	float S = 1;
	for(int i = 2; i <= 100; i++) {
		S += float(1)/float(i);
	}
	cout << fixed << setprecision(2);
	cout << S << endl;
	return 0;
}
