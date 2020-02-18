#include <stdio.h>

int main(){
  int var;
  while(scanf("%i",&var) != EOF){
    if(var == 0){
      printf("vai ter copa!\n");
    }else{
      printf("vai ter duas!\n");
    }
  }
  return 0;
}
