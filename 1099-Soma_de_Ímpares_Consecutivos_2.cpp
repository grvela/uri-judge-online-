#include <iostream>
using namespace std;
int main()
{
	int N;
	int X, Y, S = 0;
	cin >> N;
	for(int i = 0; i < N; i++)
	{
		cin >> X >> Y;
		if(X > Y)
		{
			for(int i = Y + 1; i < X; i++)
			{
				if(i % 2 != 0)
				{
					S += i;
				}
			}
			cout << S << endl;
		}
		else
		{
			for(int i = X + 1; i < Y; i++)
			{
				if(i % 2 != 0)
				{
					S += i;
				}
			}
			cout << S << endl;
		}
		S = 0;
	}

	return 0;
}
