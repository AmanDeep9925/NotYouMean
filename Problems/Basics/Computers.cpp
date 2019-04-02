#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	long long testCase;
	cin >> testCase;
	long long  X;
	while (testCase--) {
		cin >> X;
		long ans = 0;
		for (long long D = 1; D <= X; ++D) {
			if (D == 1) {
				X / D;
			}
			else {
				X / D;
				ans++;
			}
		}

		cout << ans << endl;
	}
}