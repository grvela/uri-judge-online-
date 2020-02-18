#include <iostream>

using namespace std;

int main()
{
	int X, menor_num, pos;
	cin >> X;
	int V[X];
	for(int i = 0; i < X; i++){
		cin >> V[i];
		if(i == 0){
		menor_num = V[i];
		}else{
			if(V[i] < menor_num)
			{
			menor_num = V[i];
			pos = i;
			}
		}
	}
	cout << "Menor valor: " << menor_num << endl;
	cout << "Posicao: " << pos << endl;
	return 0;
}
