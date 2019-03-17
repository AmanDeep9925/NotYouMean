#include <iostream>
#include "myio.h"

using namespace std;

void selSort(int arr[],int n){
	for (int i = 0; i < n-1; i++){
		int minIndex = i;
		for(int  j = i;j<n;j++){
			if (arr[j] < arr[minIndex])
			{
				minIndex = j;
			}
		}
		swap(arr[minIndex],arr[i]);
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

	selSort(arr, size);

	cout << "The sorted array:";

	outputArr(arr, size);

}