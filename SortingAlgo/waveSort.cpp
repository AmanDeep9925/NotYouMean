#include <iostream>
#include "myio.h"
using namespace std;

void waveSort(int arr[], int n) {
	// Wave sort Algorithm

	for (int i = 0; i < n; i += 2) {
		// check the right element
		if (i > 0 && arr[i - 1] < arr[i]) {
			swap(arr[i - 1], arr[i]);
		}

		// check the left element
		if (i < n - 1 && arr[i + 1] > arr[i]) {
			swap(arr[i], arr[i + 1]);
		}
	}
}

int main() {
	int arr[100], size;

	cout << "Enter the size of the array : ";
	cin >> size;

	cout << "Enter the element of the array:";

	inputArr(arr, size);

	cout << "The unsorted array : ";

	outputArr(arr, size);

	waveSort(arr, size);

	cout << "The sorted array:";

	outputArr(arr, size);
}