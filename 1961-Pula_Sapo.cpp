#include <iostream>
#include <math.h>

using namespace std;

int main(){
  int P, N, M;
  bool a = true;
  cin >> P >> N;
  int V[N];
  for(int i = 0; i < N; i++){
    cin >> V[i];
  }
  for(int j = 0; j < N - 1; j++){
    M = fabs(V[j + 1] - V[j]);
    if(M > P){
      a = false;
      break;
    }
  }
  if(a) cout << "YOU WIN" << endl;
  else cout << "GAME OVER" << endl;
  return 0;
}
