#include <iostream>
#include <string>

using namespace std;

int main(){
  string L;
  getline(cin, L);
  if(L.length() > 80) cout << "NO" << endl;
  else cout << "YES" << endl;
  return 0;
}
