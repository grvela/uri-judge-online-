#include <iostream>
#include <string>

using namespace std;

int main(){
  int N, O;
  string H, M;
  cin >> N;
  while(N != 0){
    cin >> H >> M >> O;
    if(H.size() == 1) H = "0" + H;
    if(M.size() == 1) M = "0" + M;
    cout << H << ":" << M << " - ";
    if(O == 1) cout << "A porta abriu!" << endl;
    else cout << "A porta fechou!" << endl;
    N--;
  }
  return 0;
}
