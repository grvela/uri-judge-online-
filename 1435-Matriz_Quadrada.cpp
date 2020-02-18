#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int N, K, L = 0, x = 1;
	do {
    cout << endl;
		cin >> N;
		K = N;
		int M[N][N];
		while(K >= 0) {
			for(int i = L; i < K; i++) {
				for(int j = L; j < K; j++) {
					M[i][j] = x;
				}
			}
			K--;
			x++;
			L++;
		}
		for(int i = 0; i < N; i++) {
			for(int j = 0; j < N; j++) {
				if(j == 0) cout << setw(3) << M[i][j];
        else cout << " " << setw(3) << M[i][j];
			}
			cout << endl;
		}
		x = 1;
		L = 0;
	} while(N != 0);
	return 0;
}
