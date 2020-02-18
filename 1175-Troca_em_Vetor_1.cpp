#include <iostream>
using namespace std;
int main()
{
	int V[20], k = 19, aux;
	for(int i = 0; i < 20; i++){
		cin >> V[i];
	}
	for(int j = 0; j < 20; j++){
		if(k >= j){
		aux = V[j];
		V[j] = V[k];
		V[k] = aux;
		k--;
		}
		cout << "N[" << j << "] = " << V[j] << endl;
	}
	return 0;
}
