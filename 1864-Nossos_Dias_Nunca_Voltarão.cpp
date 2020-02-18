#include <iostream>

using namespace std;

char text[] = {'L','I','F','E',
                ' ','I','S',' ',
                'N','O','T',' ',
                'A',' ',
                'P','R','O','B','L','E','M',
                ' ','T','O',' ',
                'B','E',' ',
                'S','O','L','V','E','D'};

int main(){
  int N;
  cin >> N;
  for(int i = 0; i < N; i++){
    cout << text[i];
  }
  cout << endl;
  return 0;
}
