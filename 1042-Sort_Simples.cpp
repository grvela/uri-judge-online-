#include <iostream>
using namespace std;
int main()
{
	int v[3], c[3];
	int i = 0, j = 0, n = 3;
    int aux;
	for(int x = 0; x < n; x++)
	{
		cin >> v[x];
		c[x] = v[x];
	}
	for(i = 0; i < (n-1); i++)
	{
		for(j = (n-1); j >= (i+1); j--)
		{
			if(v[j] < v[j-1])
			{
				aux = v[j-1];
				v[j-1] = v[j];
				v[j] = aux;
			}
		}
	}
	for(int x = 0; x < n; x++)
	{
		cout << v[x] << endl;
	}
	cout << endl;
    for(int x = 0; x < n; x++)
	{
		cout << c[x] << endl;
	}
	return 0;
}
