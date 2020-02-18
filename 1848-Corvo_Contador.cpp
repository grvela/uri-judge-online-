#include <iostream>
#include <string>

using namespace std;

int main(){
  int num_grito = 3, var = 0;
  string grito;
  while(num_grito != 0){
    getline(cin, grito);
    if(grito == "caw caw"){
      cout << var << endl;
      var = 0;
      num_grito--;
    }
    if(grito == "---") var += 0;
    if(grito == "--*") var += 1;
    if(grito == "-*-") var += 2;
    if(grito == "-**") var += 3;
    if(grito == "*--") var += 4;
    if(grito == "*-*") var += 5;
    if(grito == "**-") var += 6;
    if(grito == "***") var += 7;
  }
  return 0;
}
