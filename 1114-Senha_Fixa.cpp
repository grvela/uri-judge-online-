#include <iostream>
using namespace std;
int main()
{
	int n;
	while(true)
	{
	cin >> n;
	if(n != 2002)
	{
		cout << "Senha Invalida" << endl;
	}
	else
	{
    cout << "Acesso Permitido" << endl;
	break;
	}
	}
	return 0;
}
