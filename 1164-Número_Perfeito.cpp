#include <iostream>

using namespace std;

int main() {
	int N, X, S = 0, j = 1;
	cin >> N;
	for(int i = 0; i < N; i++) {
		cin >> X;
		while(j < X) {
			if(X % j == 0) {
				S += j;
			}
			j++;
		}
		if(S == X) cout << X << " eh perfeito" << endl;
		else cout << X << " nao eh perfeito" << endl;
		S = 0;
		j = 1;
	}
	return 0;
}
