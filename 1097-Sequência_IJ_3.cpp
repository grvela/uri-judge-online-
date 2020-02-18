#include <iostream>
using namespace std;
int main()
{
	int i = 1, j = 7, est;
	est = j;
	while(i<=9)
	{
		cout << "I=" << i << " J=" << j << endl;
		j--;
		if(j == est - 3)
		{
			i += 2;
			j = est + 2;
			est = j;
		}
	}
	return 0;
}
