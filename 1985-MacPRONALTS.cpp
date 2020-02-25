#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  int N;
  int A, B;
  double S = 0;
  cin >> N;
  for(int i = 0; i < N; i++){
    cin >> A >> B;
    switch(A){
      case 1001:
        S += 1.50*B;
        break;
      case 1002:
        S += 2.50*B;
        break;
      case 1003:
        S += 3.50*B;
        break;
      case 1004:
        S += 4.50*B;
        break;
      case 1005:
        S += 5.50*B;
        break;
    }
  }
  cout << fixed << setprecision(2) << S << endl;
  return 0;
}
