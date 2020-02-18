#include <iostream>
using namespace std;
int main()
{
	int X, Y;
	bool a = true;
	while(a)
	{
		cin >> X >> Y;
		if(X > 0 && Y > 0) cout << "primeiro" << endl;
		if(X < 0 && Y > 0) cout << "segundo" << endl;
        if(X < 0 && Y < 0) cout << "terceiro" << endl;
   	    if(X > 0 && Y < 0) cout << "quarto" << endl;
    	if(X == 0 || Y == 0) a = false;
	}
	return 0;
}
