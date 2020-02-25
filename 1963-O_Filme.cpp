#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  double A, B, R;
  cin >> A >> B;
  R = ((B - A)/A)*100;
  cout << fixed << setprecision(2) << R << "%" << endl;
  return 0;
}
