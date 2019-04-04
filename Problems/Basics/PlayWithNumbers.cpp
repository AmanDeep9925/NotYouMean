#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long long  N, Queries;
	long long  L, R;
	cin >> N >> Queries;
	
	long long Arr[10^9];

	for (long long    i = 0 ; i < N; ++i) {
		cin >> Arr[i];
	}

	while (Queries--) {
		cin >> L >> R;
		long long  count = 0;
		long long  sum = 0, mean;
		for (long long i = L - 1; i < R; ++i) {
			sum += Arr[i];
			count++;
		}
		mean = sum / count;
		cout <<floor(mean) << "\n";
	}
}