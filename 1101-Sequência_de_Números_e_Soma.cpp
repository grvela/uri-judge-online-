#include <iostream>
using namespace std;
int main()
{
	int X, Y, S = 0;
	do
	{
		cin >> X >> Y;
		if(X > 0 && Y > 0)
		{
			if(X > Y)
		{
			for(int i = Y; i <= X; i++)
			{
				S += i;
				cout << i << " ";
			}
		}
		else
		{
			for(int i = X; i <= Y; i++)
			{
				S += i;
				cout << i << " ";
			}

		}
		cout << "Sum=" << S << endl;
		S = 0;
		}
	}while(X > 0 && Y > 0);
	return 0;
}
