#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	long long  A[100];

	for (long long i = 0; i < N; ++i) {
		cin >> A[i];
	}

	long int Queries;
	cin >> Queries;

	long int key_val;

	while (Queries--) {
		cin >> key_val;
		long int count = 0;
		for (long long i = 0; i < N; ++i) {
			if (key_val == A[i]) {
				count++;
			}
		}
		if(count == 0){
			cout << "NOT PRESENT" << "\n";
		}

		else if(count > 0){
			cout << count << "\n";
		}
	}

}

