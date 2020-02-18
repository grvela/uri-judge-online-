#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
 int Quantidade_notas, Quantidade_moedas;
 double N, Valor_Notas[6] = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00};
 double Valor_Moedas[6] = {100, 50, 25, 10, 5, 1};
 cin >> N;
 cout << fixed << setprecision(2);
 cout << "NOTAS:" << endl;
 for(int i = 0; i < 6; i++)
 {
   if(Valor_Notas[i] <= N)
   {
   	Quantidade_notas = int(N / Valor_Notas[i]);
   	N = fmod(N, Valor_Notas[i]); 
   	cout << Quantidade_notas << " nota(s) de R$ "<< Valor_Notas[i] << endl;
   }else cout << "0 nota(s) de R$ " << Valor_Notas[i] << endl;
 }
 cout << "MOEDAS:" << endl;
 N = N* 100;
 for(int i = 0; i < 6; i++)
 {
 	if(Valor_Moedas[i] <= N)
	 {
    Quantidade_moedas = N / Valor_Moedas[i];
 	N = fmod(N, Valor_Moedas[i]);
    cout << Quantidade_moedas << " moeda(s) de R$ " << Valor_Moedas[i]/100.00 << endl; 
	 }else cout << "0 moeda(s) de R$ " << Valor_Moedas[i]/ 100.00 << endl;
 }
 return 0;
}