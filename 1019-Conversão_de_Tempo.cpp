#include <iostream>
using namespace std;
int main()
{
    unsigned N, seg = 0, minu = 0, h = 0;
    cin >> N;
    if(N < 60) seg = N;
    else
    {
    if(N >= 60)
    {
    minu = N/ 60;
    seg = N % 60;
    }
    if(minu >= 60)
    {
    h = minu / 60;
    minu = minu % 60;
    }
    }
    cout << h << ":" << minu << ":" << seg << endl;
}
