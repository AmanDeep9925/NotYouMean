#include <iostream>
using namespace std;

void swap(int &a,int &b){
	int temp;
	temp	=	a;
	a = b;
	b = temp;
}

void inputArr(int arr[],int n){
	// Enter the array's element
	for(int i = 0;i < n;++i){
		cin >> arr[i];
	}
}

void outputArr(int arr[],int n){
	// Enter the array's element
	for(int i = 0;i < n;++i){
		cout << arr[i]	<<" "	;
	}
	cout <<endl;
}
