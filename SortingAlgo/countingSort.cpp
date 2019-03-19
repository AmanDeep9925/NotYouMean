#include <iostream>
#include "myio.h"
using namespace std;

void countSort(int arr[], int n) {
	int freq[100];

	for (int i = 0; i <= n; ++i) {
		freq[i] = 0;
	}

	for (int i = 0; i < n; ++i) {
		freq[arr[i]]++;
	}

	int j = 0;
	for (int i = 0; i < n; ++i) {
		// temp uphold the current element of the frequecy array. 
		int temp = freq[i];
		while(temp--){
			arr[j] = i;
			j++;
		}
	}
	
}

int main() {
	int arr[100] = {1,0,1,3,4,5,6,2,2};
	countSort(arr, 10);

	outputArr(arr, 10);
}