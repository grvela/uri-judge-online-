#include <iostream>
using namespace std;
int main()
{
	unsigned short int HI, HF, MI, MF, RH, RM;
	cin >> HI >> MI >> HF >> MF;
	if(HF > HI && MF >= MI)
	{
		RH = HF - HI;
		RM = MF - MI;
	}

	if(HF > HI && MF < MI)
	{
		RH = HF - (HI + 1);
		RM = MF + (60 - MI);
	}
	if(HF <= HI && MF >= MI )
	{
		RH = HF + (24 - HI);
		RM = MF - MI;
	}
	if(HF < HI && MF < MI)
	{
		RH = HF + (23 - HI);
		RM = MF + (60 - MI);
	}
	if(HF == HI && MF < MI)
	{
		RH = HF + (23 - HI);
		RM = MF + (60 - MI);
	}
	if(HF == HI && MF > MI)
	{
		RH = HF - HI;
		RM = MF - MI;
	}
	cout << "O JOGO DUROU " << RH << " HORA(S) E " << RM << " MINUTO(S)" << endl;
	return 0;

}
