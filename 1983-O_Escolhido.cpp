#include <iostream>

using namespace std;

struct aluno{
  long int m;
  double nota;
};

int main() {
  int n, p;
  double maior_nota = 0;
  cin >> n;
  aluno a[n];
  for(int i = 0; i < n; i++){
    cin >> a[i].m >> a[i].nota;
    if(a[i].nota > maior_nota){
       maior_nota = a[i].nota;
       p = i;
     }
  }
  if(maior_nota >= 8) cout << a[p].m << endl;
  else cout << "Minimum note not reached" << endl;
  return 0;
}
