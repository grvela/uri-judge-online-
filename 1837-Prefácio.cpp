#include <iostream>
#include <cmath>


using namespace std;


int main(){

    int a,b,q,r;

    cin>>a>>b;
    q = a/b;
    r = a - b*q;

    if(r < 0)
        r = r + abs(b);

    q = (a-r)/b;
    cout<<q<<" "<<r<<endl;



    return 0;
}
