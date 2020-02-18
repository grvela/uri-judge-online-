#include <iostream>

using namespace std;

int main(){

  int N, M;
  cin >> N;
  for(int i = 0; i < N; i++){
    cin >> M;
    if(M % 2 != 0) cout << "1" << endl;
    else cout << "0" << endl;
  }
  return 0;
}
