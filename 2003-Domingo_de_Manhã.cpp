#include <iostream>

using namespace std;

int main(){
  int H, M;
  char P;
  while (cin >> H >> P >> M) {
    H++;
    if(H > 8){
      cout << "Atraso maximo: " << 60*(H - 8) + M << endl;
    }else{
      if(H == 8){
        cout << "Atraso maximo: " << M << endl;
      }else{
        cout << "Atraso maximo: 0" << endl;
      }
    }
  }
  return 0;
}
