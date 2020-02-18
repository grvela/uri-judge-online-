#include <iostream>
using namespace std;
int main()
{
  int N;
  cin >> N;
  cout << int(N/365) << " ano(s)" << endl;
  cout << int(N%365)/30 << " mes(es)" << endl;
  cout << int(N%365)%30 << " dia(s)" << endl;
  return 0;	
}