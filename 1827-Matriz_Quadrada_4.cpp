#include <iostream>

using namespace std;

int main(){
  int N;
  while(cin >> N){
    int M[N][N];
    int p = N-1;
    int q = N/3;
    int r = N - q;
    int a;
    for(int i = 0; i < N; i++){
      for(int j = 0; j < N; j++){
        M[i][j] = 0;
      }
    }
    for(int i = 0; i < N; i++){
      M[i][i] = 2;
    }
    for(int i = 0; i < N; i++){
      M[i][p] = 3;
      p--;
    }
    for(int i = q; i < r; i++){
      for(int j = q; j < r; j++){
        M[i][j] = 1;
      }
    }
    if(N%2!=0){
      a = N/2;
      M[a][a] = 4;
    }
    for(int i = 0; i < N; i++){
      for(int j = 0; j < N; j++){
        cout << M[i][j];
      }
      cout << endl;
    }
    cout << endl;
  }
  return 0;
}
