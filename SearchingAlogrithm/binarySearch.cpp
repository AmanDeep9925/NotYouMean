#include <iostream>
#include "../SortingAlgo/myio.h"
using namespace std;

int binary_search(int arr[], int n, int key) {
	int beg = 0;
	int end = n - 1;
	int mid;

	while (beg <= end) {
		mid = (beg + end) / 2;
		if (arr[mid] == key) {
			return mid;
		}

		else if (key < arr[mid]) {
			end = mid - 1;
		}

		else if (key > arr[mid]) {
			beg = mid + 1;
		}
	}

	return -1;
}

int main() {
	int size;
	int arr[100];

	cin >> size;

	inputArr(arr, size);

	int key;
	cin >> key;
	int ans = binary_search(arr, size, key);
	cout << ans;

}