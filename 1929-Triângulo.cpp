#include<iostream>

using namespace std;

int main()
{
    int a[4],b,i,j,d,max=0;

    for (j = 0; j < 4; ++j)
    cin >> a[j];
  for (i = 0; i < 4; ++i)
    {
        for (j = i + 1; j < 4; ++j)
        {
            if (a[i] > a[j])
            {
                b = a[i];
                a[i] = a[j];
                a[j] = b;
            }
        }
    }


    if(a[0]+a[1]>a[2] || a[1]+a[2]>a[3]){
        cout << "S\n";
    }else{
        cout << "N\n";
    }
    return 0;
}
