#include<iostream>

using namespace std;

int fibonacci(int a, int *Q){
(*Q)++;
if(a == 0) return 0;
if(a == 1) return 1;
return fibonacci(a-1, Q) + fibonacci(a-2, Q);
}

int main()
{
	int N, R, X;
	int calls = 0;
	int *P = &calls;
	cin >> N; 
	for(int i = 0; i < N; i++){
		cin >> X;
		R = fibonacci(X, P);
		cout << "fib(" << X << ") = " << calls - 1 << " calls = " << R << endl;
		calls = 0;
	}
	return 0;
}