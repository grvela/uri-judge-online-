#include <iostream>

using namespace std;

int main(){
  int a, b, c;
  cin >> a >> b >> c;
  if(a > b && b <= c) cout << ":)" << endl;
  if(a < b && b >= c) cout << ":(" << endl;
  if(a < b && b < c && (c - b <  b - a)) cout << ":(" << endl;
  if( a < b && b < c && (c - b >= b - a)) cout << ":)" << endl;
  if(a > b && b > c && (b - c < a - b)) cout << ":)" << endl;
  if(a > b && b > c && (b - c >= a - b)) cout << ":(" << endl;
  if(a == b){
    if(c > b) cout << ":)" << endl;
    else cout << ":(" << endl;
  }
  return 0;
}
