#include <iostream>

using namespace std;

int main(){
  string A, B;
  int N;
  cin >> N;
  for(int i = 0; i < N; i++){
  cin >> A >> B;

  if(A == "ataque" && B == "pedra") cout << "Jogador 1 venceu" << endl;
  if(A == "ataque" && B == "ataque") cout << "Aniquilacao mutua" << endl;
  if(A == "ataque" && B == "papel") cout << "Jogador 1 venceu" << endl;

  if(A == "pedra" && B == "papel") cout << "Jogador 1 venceu" << endl;
  if(A == "pedra" && B == "pedra") cout << "Sem ganhador" << endl;
  if(A == "pedra" && B == "ataque")cout << "Jogador 2 venceu" << endl;

  if(A == "papel" && B == "ataque") cout << "Jogador 2 venceu" << endl;
  if(A == "papel" && B == "papel") cout << "Ambos venceram" << endl;
  if(A == "papel" && B == "pedra") cout << "Jogador 2 venceu" << endl;

  }
  return 0;
}
