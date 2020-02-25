#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
  double N;
  scanf("%lf", &N );
  if(N >= 0) printf("%+.4E\n", N);
  else  printf("%.4E\n", N);
  return 0;
}
