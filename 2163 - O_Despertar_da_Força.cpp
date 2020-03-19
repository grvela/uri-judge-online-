#include <iostream>

using namespace std;

int main(){
  int N, M;
  int x = 0, y = 0;
  int s = 0;
  cin >> N >> M;
  int V[N][M];
  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      cin >> V[i][j];
    }
  }

  for(int i = 1; i < N - 1; i++){
    for(int j = 1; j < M - 1; j++){
      if(V[i][j] == 42){
        for(int p = i - 1; p < i + 2; p++){
          for(int q = j - 1; q < j + 2; q++){
            s += V[p][q];
          }
        }
      if(s == 98){
          x = i + 1;
          y = j + 1;
          break;
        }
      s = 0;
      }
    }
  }
  cout << x << " " << y << endl;
  return 0;
}
