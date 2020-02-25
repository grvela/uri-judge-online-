#include <iostream>

using namespace std;

int main(){
  long long int N;
  long long int S = 0, O = 0;
  long long int U = 0;
  cin >> N;
  long long int V[N];
  for(int i = 0; i < N; i++){
    cin >> V[i];
    S += V[i];
  }
  for(int j = 0; j < N;){
    if(j < 0) break;
    if(j > U) U = j;
    if(V[j] == 0) break;
    if(V[j]%2 == 0){
      V[j]--;
      j--;
    }else{
      V[j]--;
      j++;
    }
    O++;
  }
  cout << U + 1 << " " << S - O << endl;
  return 0;
}
