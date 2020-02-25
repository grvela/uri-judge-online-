#include<iostream>

using namespace std;

int main() {
  int R, N , T = 0;
  cin >> R;
  for(int i = 0; i < 5; i++){
    cin >> N;
    if(N == R) T++;
  }
  cout << T << endl;
  return 0;
}
