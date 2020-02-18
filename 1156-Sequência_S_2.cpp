#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	float S = 0, j = 1, i = 1;
	while(true) {
		if(j <= 39) {
			S += float(j) / float(i);
			j += 2;
			i *= 2;
		} else break;
	}
	cout << fixed << setprecision(2);
	cout << S << endl;
	return 0;
}
