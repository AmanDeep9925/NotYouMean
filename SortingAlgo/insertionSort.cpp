#include <iostream>
#include "myio.h"

using namespace std;

void insertionSort(int arr[], int n) {
	// insertion sort
	int temp,j;
	for (int i = 0; i < n; ++i) {
		j = i-1;
		temp = arr[i];
		while(j>=0 && arr[j] > temp){
			arr[j+1] = arr[j];
			j--;
		}

		arr[j+1] = temp;
	}
}

int main(){
	int arr[100], size;

	cout << "Enter the size of the array : ";
	cin >> size;

	cout << "Enter the element of the array:";

	inputArr(arr, size);

	cout << "The unsorted array : ";

	outputArr(arr, size);

	insertionSort(arr, size);

	cout << "The sorted array:";

	outputArr(arr, size);
}