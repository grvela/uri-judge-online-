#include <iostream>

using namespace std;

int main() {
	int N, j = 0;
	int V[1000];
	cin >> N;
	for(int i = 0; i < 1000; i++){
		V[i] = j;
		cout << "N[" << i << "] = " << j << endl;
		if(j == N - 1) j = -1;
		j++;
	}
	return 0;
}
