#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int COD_A, COD_B, NUM_A, NUM_B;
	float VAL_A, VAL_B;
	cin >> COD_A >> NUM_A >> VAL_A;
	cin >> COD_B >> NUM_B >> VAL_B;
	cout << fixed << setprecision(2);
	cout << "VALOR A PAGAR: R$ " << (NUM_A*VAL_A) + (NUM_B*VAL_B) << endl; 
	return 0;
}