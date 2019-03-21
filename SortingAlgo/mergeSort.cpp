#include <iostream>
using namespace std;

void mergeArray(int arr[], int beg, int mid, int end) {
	int p = beg;
	int q = mid + 1;

	int Arr[end - beg + 1],k;

	for(int i=beg;i<end;++i){
		if(p < mid){
			Arr[k++] = arr[q++];
		}
		else if(q > end){
			Arr[k++] = arr[p++];
		}
		else if(Arr[p] < Arr[q]){
			Arr[k++] = arr[p++];
		}
		else{
			Arr[k++] = arr[q++];
		}
	}
}