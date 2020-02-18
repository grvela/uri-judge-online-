#include <iostream>
using namespace std;
int main()
{
	int num, pos, maior = 0;
	for(int i = 1; i <= 100; i++)
	{
		cin >> num;
		if(num >= maior)
		{
			maior = num;
			pos = i;
		}
	}
	cout << maior << endl;
	cout << pos << endl;
	return 0;
}
