#include <iostream>

using namespace std;

int main(){
  int T, R;
  long int N;
  while(cin >> T && T != 0){
    for(int i = 0; i < T; i++){
        cin >> N;
        if(N % 2 != 0){
            R = (N-1)*2 + 1;
        }else{
            R = (N-2)*2 + 2;
        }
        cout << R << endl;
    }
  }
  return 0;
}
