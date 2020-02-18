#include <iostream>
using namespace std;
int main()
{
	int n, i = 0, impar = 6;
	cin >> n;
	while(n < 0) cin >> n;
	while(impar != 0)
	{
	if((n + i) % 2 > 0)
      {
		 cout << (n + i) << endl;
		 impar--;
  	  }
	i++;
	}
	return 0;
}
