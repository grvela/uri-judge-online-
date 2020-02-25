#include "iostream"

using namespace std;

int main(){
  int S, T, F, R;
  cin >> S >> T >> F;
  R = S + T + F;
  if (R == 24){
    cout << "0" << endl;
  }else{
    if(R < 24){
      if(R < 0){
        cout << 24 + R << endl;
      }else cout << R << endl;
    }
    else cout << R - 24 << endl;
  }
  return 0;
}
