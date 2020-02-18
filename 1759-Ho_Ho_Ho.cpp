#include <iostream>

using namespace std;

int main(){

  long int N;
  cin >> N;
  for(int i = 0; i < N; i++){
  if(i == N -1) cout << "Ho!" << endl;
  else {
    cout << "Ho ";
  }
  }
  return 0;
}
