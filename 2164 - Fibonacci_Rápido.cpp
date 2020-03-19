#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
  double N;
  cin >> N;
  N = ( pow(((1 + sqrt(5))/2), N) - pow(((1 - sqrt(5))/2), N))/sqrt(5);
  cout << fixed << setprecision(1) << N << endl;
  return 0;
}
