#include <iostream>
using namespace std;
int main()
{
	int X;
	cin >> X;
	while(X != 0)
	{
	for(int i = 1; i <= X; i++)
	{
    if(i == X) cout << i;
    else cout << i << " ";
	}
	cout << endl;
    cin >> X;
	}
	return 0;
}
