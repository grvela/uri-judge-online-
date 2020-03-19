#include <iostream>

using namespace std;

int main(){
  int N, X, Y, Z;
  bool R = true;
  cin >> N;
    for(int i = 0; i < N; i++){
      cin >> X;
      if(i == 0) {
        Y = X;
        Z = Y;
      }
      else{
        if(X == Y || (X > Y && Y > Z) || (X < Y && Y < Z)) R = false;
        Z = Y;
        Y = X;
      }
    }
  if(N == 0 || N == 1) R = false;
  if(R) cout << 1 << endl;
  else cout << 0 << endl;
  return 0;
}
