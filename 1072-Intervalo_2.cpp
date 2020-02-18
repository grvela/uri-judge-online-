#include <iostream>
using namespace std;
int main()
{
	int N, x = 0, y = 0;
    cin >> N;
    int v[N];
    for(int i = 0; i < N; i++)
	{
		cin >> v[i];
		if(v[i] >= 10 && v[i] <= 20)
		{
			x++;
		}else
		{
			y++;
		}
	}
	cout << x << " in" << endl;
	cout << y << " out" << endl;
	return 0;
}
