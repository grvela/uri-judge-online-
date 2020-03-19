#include <iostream>

using namespace std;

int main(){
  int N, A, B, C = 0;
  int D = 0;
  cin >> N;
  for(int i = 0; i < N; i++){
    cin >> A;
    if(i == 0) B = A;
    else {
      if(B > A && D == 0){
        C = i + 1;
        D = 1;
      }
      B = A;
    }
  }
  cout << C << endl;
  return 0;
}
