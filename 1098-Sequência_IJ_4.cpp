#include <iostream>
using namespace std;
int main()
{
	float i = 0, j = 1;
	while(i <= 2.2)
	{
		cout << "I=" << i << " J=" << j + i << endl;
		j++;
		if(j == 4)
		{
			i += 0.2;
			j = 1;
		}
	}
	return 0;
}
