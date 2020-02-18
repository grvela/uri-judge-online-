#include <iostream>

using namespace std;

int main() {
	long long T, PA, PB;
	short int R = 0;
	double G1, G2;
	cin >> T;
	for(int i = 0; i < T; i++) {
		cin >> PA >> PB >> G1 >> G2;
		do{
			PA += (G1/100)*PA;
			PB += (G2/100)*PB;
			R++;
			if(R > 100) break;
		}while(PA <= PB);
	if(R > 100) cout << "Mais de 1 seculo." << endl;
	else cout << R << " anos." << endl;
	R = 0;
	}
	return 0;
}
