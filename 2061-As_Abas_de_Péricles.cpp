#include <iostream>

using namespace std;

int main(){
  int N, M;
  string T;
  cin >> N >> M;
  for(int i = 0; i < M; i++){
    cin >> T;
    if(T == "fechou"){
      N--;
      N += 2;
    }
    else N--;
  }
  cout << N << endl;
  return 0;
}
