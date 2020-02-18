#include<iostream>

using namespace std;

int main(){
  int N, M, Vant = 0;
  while(cin >> N){
    for(int i = 0; i < N; i++){
      cin >> M;
      if( M > Vant) Vant = M;
    }
    if(Vant < 10) cout << "1" << endl;
    else{
      if(Vant >= 10 && Vant < 20) cout << "2" << endl;
      else{
        cout << "3" << endl;
      }
    }
    Vant = 0;
  }
  return 0;
}
