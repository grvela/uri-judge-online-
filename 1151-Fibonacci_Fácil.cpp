#include <iostream>

using namespace std;

int main() {
	int N, S = 0, Valor_Atual = 1, Valor_Anterior = 0, aux;
	bool a = false;
	cin >> N;
	cout << "0 1 ";
	for(int i = 2; i < N; i++) {
		S = Valor_Atual + Valor_Anterior;
		aux = Valor_Atual;
		Valor_Atual = S;
		Valor_Anterior = aux;
		if(i == (N - 1))
			cout << S;
		else
			cout << S << " ";
	}
	cout << endl;
	return 0;
}
