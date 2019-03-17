#include <iostream>
#include "myio.h"
using namespace std;

void bubSort(int arr[], int n) {
	// Sorting of the array
	// Comparing  adjacent elements

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n - i - 1; ++j) {
			// checking the adjacent element
			if (arr[j] > arr[j + 1])
				// swap their position
				swap(arr[j], arr[j + 1]);
		}
	}
}

int main() {

	int arr[100], size;

	cout << "Enter the size of the array : ";
	cin >> size;

	cout << "Enter the element of the array:";

	inputArr(arr, size);

	cout << "The unsorted array";

	outputArr(arr, size);

	bubSort(arr, size);

	cout << "The sorted array:";

	outputArr(arr, size);

}