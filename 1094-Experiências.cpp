#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int N;
	char T;
	float total = 0, TC = 0, TR = 0, TS = 0, Q, PR, PS, PC;
	cin >> N;
	for(int i = 0; i < N; i++)
	{
		cin >> Q >> T;
		total += Q;
		if(T == 'R')
		{
			TR += Q;
		}
		if(T == 'S')
		{
			TS += Q;
		}
		if(T == 'C')
		{
			TC += Q;
		}
	}
	PR = (TR/total)*100;
	PS = (TS/total)*100;
	PC = (TC/total)*100;
	cout << "Total: " << total << " cobaias" << endl;
	cout << "Total de coelhos: " << TC << endl;
	cout << "Total de ratos: " << TR << endl;
	cout << "Total de sapos: " << TS << endl;
	cout << fixed <<  setprecision(2);
	cout << "Percentual de coelhos: " << PC << " %" << endl;
	cout << "Percentual de ratos: " << PR << " %" << endl;
	cout << "Percentual de sapos: " << PS << " %" << endl;
	return 0;
}
