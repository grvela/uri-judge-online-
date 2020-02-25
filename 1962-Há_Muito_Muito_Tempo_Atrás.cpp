#include <iostream>

using namespace std;

int main(){
  int N;
  long long int M;
  cin >> N;
  for(int i = 0; i < N; i++){
    cin >> M;
    if(M > 2015){
      cout << M - 2015 + 1 << " A.C." << endl;
    }else{
      if(M - 2015 == 0){
        cout << "1 A.C." << endl;
      }else{
        cout << 2015 - M << " D.C." << endl;
      }
    }
  }

  return 0;
}
