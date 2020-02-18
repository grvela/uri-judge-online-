#include <iostream>
using namespace std;
int main()
{
	int op, alcool = 0, gasolina = 0, diesel = 0;
	while(op != 4)
	{
		cin >> op;
		switch(op)
		{
			case 1: alcool++;
			break;
			case 2: gasolina++;
			break;
			case 3: diesel++;
			break;
		}
	}
	cout << "MUITO OBRIGADO" << endl;
	cout << "Alcool: " << alcool << endl;
	cout << "Gasolina: " << gasolina << endl;
	cout << "Diesel: " << diesel << endl;
	return 0;
}
