#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
	double A[100];
	for(int i = 0; i < 100; i++){
		cin >> A[i];
	}
	for(int j = 0; j < 100; j++){
		if(A[j] <= 10){
        printf("A[%i] = %.1f\n", j, A[j]);
		}
	}
	return 0;
}
