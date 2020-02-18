#include <iostream>

using namespace std;

int main() {
  int N;
  while(cin >> N){
    int M[N][N];
    int o = N - 1;

    for(int i = 0; i < N; i++){
      for(int j = 0; j < N; j++){
        M[i][j] = 3;
      }
    }

    for(int p = 0; p < N; p++){
      M[p][p] = 1;
    }
    for(int i = 0; i < N; i++){
      M[i][o] = 2;
      o--;
    }

    for(int i = 0; i < N; i++){
      for(int j = 0; j < N; j++){
        cout << M[i][j];
      }
      cout << endl;
    }

  }
  return 0;
}
