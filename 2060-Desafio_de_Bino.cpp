#include <iostream>

using namespace std;

int main(){
  int N, T;
  int DOIS = 0, TRES = 0, QUATRO = 0, CINCO = 0;
  cin >> N;
  for(int i = 0; i < N;i++){
    cin >> T;
    if(T % 2 == 0) DOIS++;
    if(T % 3 == 0) TRES++;
    if(T % 4 == 0) QUATRO++;
    if(T % 5 == 0) CINCO++;
  }
  cout << DOIS << " Multiplo(s) de 2" << endl;
  cout << TRES << " Multiplo(s) de 3" << endl;
  cout << QUATRO << " Multiplo(s) de 4" << endl;
  cout << CINCO << " Multiplo(s) de 5" << endl;
  return 0;
}
