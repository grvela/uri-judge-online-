#include <iostream>

using namespace std;

int main(){
  int N;
  int Num, MenorNum, PosNuM;
  cin >> N;
  for(int i = 0; i < N; i++){
    cin >> Num;
    if(i == 0){
      MenorNum = Num;
      PosNuM = i + 1;
    }else{
      if(Num < MenorNum){
        MenorNum = Num;
        PosNuM = i + 1;
      }
    }
  }
  cout << PosNuM << endl;
  return 0;
}
