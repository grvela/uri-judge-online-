#include <iostream>

using namespace std;

int N;
int T = 0, S = 0;

void x(bool a){
  bool b = true;
  for(int i = 0; i <= N; i++){
    int j = i;
    int p = i;
    if(j == 0){
      S++;
    }else{
      while(j != 0){
        if(a){
          if(b){
            cout << "0";
            b = false;
          }
          cout << " " << p;
          S++;
          j--;
        }
        else{
          S++;
          j--;
        }
      }
    }
 }
}
int main() {
  bool a = false;
  while (cin >> N){
  T++;
  x(a);

  if(S > 1) cout << "Caso "<< T << ": " << S << " numeros" << endl;
  else cout << "Caso "<< T << ": " << S << " numero" << endl;

  a = true;
  x(a);
  a = false;
  if(N == 0) cout << "0" << endl << endl;
  else cout << endl << endl;
  S = 0;
}
  return 0;
}
