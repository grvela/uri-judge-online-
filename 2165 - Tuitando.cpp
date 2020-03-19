#include <iostream>
#include <string>

using namespace std;

int main(){
  string S;
  getline(cin, S);
  if(S.length() <= 140) cout << "TWEET" << endl;
  else cout << "MUTE" << endl;
  return 0;
}
