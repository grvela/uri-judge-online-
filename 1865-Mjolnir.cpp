#include <iostream>

using namespace std;

int main(){
  int N, Newton;
  string name;
  cin >> N;
  for(int i = 0; i < N; i++){
    cin >> name >> Newton;
    if(name == "Thor") cout << "Y" << endl;
    else cout << "N"<< endl;
  }
}
