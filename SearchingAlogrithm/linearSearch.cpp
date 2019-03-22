#include <iostream>
#include "myio.h"

using namespace std;

int linearSearch(int arr[], int n, int key) {
	// Traverse the array
	// Check every element for thhe key element
	// If found retrun the position of the key
	bool flag = false;
	int pos;
	for (int i = 0; i < n; ++i) {
		if (arr[i] == key) {
			flag = true;
			pos = i;
			break;
		}
	}

	if (flag == true) {
		return pos;
	}
	else {
		return -1;
	}
}

int main() {

	int arr[] = { 3, 4, 1, 7, 5 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 4;

	int resultIndex = linearSearch(arr, n, x);

	if (resultIndex == -1) {
		cout << "Element not found in the arary";
	}

	else {
		cout << "Element found at index " << resultIndex ;
	}

}