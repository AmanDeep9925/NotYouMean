#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;

	int A[1000];

	for (int i = 0; i < N; ++i){
		cin >> A[i];
	}

	int CurSum = 0;
	int MaxSum = 0;
	int left = -1,right = -1;

	for(int i = 0;i < N;++i){
		for(int j = i;j < N;++j){
				CurSum = 0;
			for(int k = i;k <= j; ++k){
				CurSum += A[k];
			}

			if(CurSum > MaxSum){
				MaxSum = CurSum;
				left = i;
				right = j;
			}
		}
	}

	cout << "The Maximum Sum of Array is : " << MaxSum << endl;

	for(int i = left;i <= right; ++i){
		cout << A[i] << " ";
	}
	
}