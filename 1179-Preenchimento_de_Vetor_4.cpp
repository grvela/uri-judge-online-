#include <iostream>

using namespace std;

int main()
{
	int vPar[5], vImpar[5];
	int X, n = 0, m = 0;
	for(int i = 0; i < 15; i++){
		cin >> X;
		if(X % 2 == 0){
			vPar[n] = X;
			n++;
		}else{
			vImpar[m] = X;
			m++;
		}
		if(n > 4){
			for(int j = 0; j < 5; j++){
				cout << "par[" << j << "] = " << vPar[j] << endl;
				vPar[5] = {};
				n = 0;
			}
		}
		if(m > 4){
			for(int k = 0; k < 5; k++){
				cout << "impar[" << k << "] = " << vImpar[k] << endl;
				m = 0;
				vImpar[5] = {};
			}
		}
	}
	for(int b = 0; b <= m - 1; b++){
			cout << "impar[" << b << "] = " << vImpar[b] << endl;
	}
	for(int a = 0; a <= n - 1; a++){
		cout << "par[" << a << "] = " << vPar[a] << endl;
	}
	return 0;
}
