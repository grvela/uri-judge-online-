#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){
  long long int N;
  string M, P;
  cin >> N;
  M = to_string(N);
  for(int i = M.size()-1; i >= 0; i--){
    P += M[i];
  }
  cout << P << "\n";
  return 0;
}
