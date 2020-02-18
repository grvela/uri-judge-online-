#include <iostream>
using namespace std;
int main()
{
	unsigned short int I, F, R;
	cin >> I >> F;
	if(I >= F)
	{
		R = F + (24 - I);
	}
	else
	{
	R = F - I;
	}
	cout << "O JOGO DUROU " << R << " HORA(S)" << endl;
	return 0;
}
