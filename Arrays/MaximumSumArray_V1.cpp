#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;

	int A[1000];
	int CumSum[1000] = {0};
	int maxsum = 0;
	int cursum = 0;

	int left = -1;
	int right = -1;
	
	cin >> A[0];
	CumSum[0] = A[0];
	for (int i = 1; i < n; ++i)
	{
		cin >> A[i];
		CumSum[i] = CumSum[i-1] + A[i];
	}

	for (int i = 0; i < n; ++i)
	{
		for(int j = i; j< n;++j){
			cursum = 0;
			cursum = CumSum[j] - CumSum[i-1];

			if(cursum > maxsum){
				maxsum = cursum;
				left = i;
				right = j;
			}
		}
	}

	cout << "The Maximum Sum of Array is : " << maxsum<< endl;

	for(int i = left;i <= right; ++i){
		cout << A[i] << " ";
	}

}