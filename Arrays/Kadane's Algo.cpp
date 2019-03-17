#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	int A[1000];

	int cursum = 0;
	int maxsum = 0;

	for (int i = 0; i < n; ++i) {
		cin >> A[i];
	}

	for (int i = 0; i < n ; ++i) {
		cursum = cursum + A[i];

		if (cursum < 0) {
			cursum = 0;
		}

		maxsum = max(cursum, maxsum);
	}

	cout << "The Maximum Sum Of The SubArray Is : " << maxsum;
	return 0;
}