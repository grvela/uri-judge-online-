#include <iostream>
using namespace std;
int main()
{
	int G, I, N, NGrenais = 1;
	int Vitorias_Inter = 0, Vitorias_Grem = 0, Empates = 0;
	while(true)
	{
		cin >> I >> G;
		if(I == G)
		{
			Empates++;
		}
		else
		{
			if(I > G)
			{
				Vitorias_Inter++;
			}
			else
			{
				Vitorias_Grem++;
			}
		}
		cout << "Novo grenal (1-sim 2-nao)" << endl;
		cin >> N;
		if(N == 2) break;
		else NGrenais++;
	}
	cout << NGrenais << " grenais" << endl;
	cout << "Inter:" << Vitorias_Inter << endl;
	cout << "Gremio:" << Vitorias_Grem << endl;
	cout << "Empates:" << Empates << endl;
    if(Vitorias_Inter > Vitorias_Grem)
	{
		cout << "Inter venceu mais" << endl;
	}else
	{
		cout << "Gremio venceu mais" << endl;;
	}
		 return 0;
}
