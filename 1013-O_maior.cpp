#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int A, B, C, MAIORAB, MAIORNC;
	cin >> A >> B >> C;
	MAIORAB = ((A + B + abs(A - B))/2);
	MAIORNC = ((MAIORAB + C + abs(MAIORAB - C))/2);
	cout << MAIORNC << " eh o maior" << endl; 
	return 0;
}