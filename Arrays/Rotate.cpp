#include <iostream>
#include <cstring>
using namespace std;

void Rotate(char*,int);

int main(){

	char A[100];
	cin.getline(A,100);
	int k;
	cin >> k;

	Rotate(A,k);
	cout<<A;
}

void Rotate(char* A,int K){

	int i = strlen(A);
	while(i>=0){
		A[i+K] = A[i];
		i--;
	}

	i = strlen(A);
	int j = i - K;
	int s = 0;
	 while(j < i){
	 	A[s] = A[j];
	 	s++;
	 	j++;
	}
	A[i-K] = '\0';
}