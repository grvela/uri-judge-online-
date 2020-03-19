#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){
  int T, M;
  double R;
  string S;
  cin >> T;
  for(int i = 0; i < T; i++){
    cin >> S;
    M = S.size();
    R = M*0.01;
    cout << fixed << setprecision(2) << R << endl;
  }
  return 0;
}
