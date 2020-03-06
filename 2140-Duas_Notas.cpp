#include <iostream>

using namespace std;

int main(){
  int N, M, T;
  bool a = false;
  int v[6] = {2, 5, 10, 20, 50, 100};
  while(cin >> N >> M && N != 0 && M != 0){
    T = M - N;
    for(int i = 0; i < 6; i++){
      for(int j = 0; j < 6; j++){
        if(v[i] + v[j] == T) a = true;
      }
    }
    if(a == true) cout << "possible" << endl;
    else cout << "impossible" << endl;
    a = false;
  }
  return 0;
}
