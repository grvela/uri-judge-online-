nclude <iostream>
#include <iomanip>
using namespace std;
int main()
{
	short int op, qn;
	float total;
	cin >> op >> qn;
	switch (op)
	{
		case 1: total = qn*4;
		break;
		case 2: total = qn*4.5;
		break;
		case 3: total = qn*5;
		break;
		case 4: total = qn*2;
		break;
		case 5: total = qn*1.5;
		break;
	}
	cout << fixed << setprecision(2);
	cout << "Total: R$ "<< total << endl;
	return 0;
}
