#include <iostream>
#include "myio.h"
using namespace std;

void mergeArray(int arr[], int beg, int mid, int end) {
	int p = beg;
	int q = mid + 1;

	int Arr[end - beg + 1], k=0;

	for (int i = beg; i <= end; ++i) {
		if (p > mid) {
			Arr[k++] = arr[q++];
		}
		else if (q > end) {
			Arr[k++] = arr[p++];
		}
		else if (arr[p] < arr[q]) {
			Arr[k++] = arr[p++];
		}
		else {
			Arr[k++] = arr[q++];
		}
	}

	for (int p = 0; p < k; ++p) {
		arr[beg++] = Arr[p];
	}
}

void mergeSort(int arr[], int beg, int end) {
	if (beg < end) {
		int mid = (beg + end) / 2;

		mergeSort(arr,beg,mid);
		mergeSort(arr,mid+1,end);
		mergeArray(arr,beg,mid,end);
	}
}

int main(){

	int arr[100],size;

	cout << "Enter the size of the array : ";
	cin >> size;

	int beg = 0,end = size-1;

	cout << "Enter the element of the array:";

	inputArr(arr, size);

	cout << "The unsorted array : ";

	outputArr(arr, size);

	mergeSort(arr,beg,end);

	cout << "The sorted array:";

	outputArr(arr, size);
}