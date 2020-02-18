#include <iostream>

using namespace std;

int main() {
	int N;
	long int X , S = 0;
	cin >> N;
	for(int i = 0; i < N; i++){
		cin >> X;
		for(int j = 1; j <= X; j++){
			if(X % j == 0){
				S += j;
			}
		}
		if(S == X+1) cout << X << " eh primo" << endl;
		else cout << X << " nao eh primo" << endl;
		S = 0;
	}
	return 0;
}
