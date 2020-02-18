#include <iostream>

using namespace std;

int main(){
  string name_1, name_2;
  string op_1, op_2;
  int N;
  int a, b;
  cin >> N;
  for(int i = 0; i < N; i++){
    cin >> name_1 >> op_1 >> name_2 >> op_2;
    cin >> a >> b;
    if((a + b) % 2 == 0){
      if(op_1 == "PAR"){
        cout << name_1 << endl;
      }
      if(op_2 == "PAR"){
          cout << name_2 << endl;
      }
    }else{
      if(op_1 == "IMPAR"){
        cout << name_1 << endl;
      }
      if(op_2 == "IMPAR"){
          cout << name_2 << endl;
      }
    }
  }
  return 0;
}
