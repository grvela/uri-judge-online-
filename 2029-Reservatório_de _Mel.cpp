#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double A, B;
  double H, r, C;
  const double pi = 3.14;
  cout << fixed << setprecision(2);

  while(cin >> A >> B){
    r = B/2;
    C = pi*r*r;
    H = A/C;
    cout << "ALTURA = " << H << endl;
    cout << "AREA = " << C << endl;
  }
  return 0;
}
