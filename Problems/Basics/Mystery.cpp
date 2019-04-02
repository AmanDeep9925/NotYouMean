#include<bits/stdc++.h>
using namespace std;
#define LL long long

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	LL n;
	while (cin >> n) {
		int ans = 0;
		while (n) {
			n = n & (n - 1);
			ans++;
		}
		cout << ans << "\n";
	}
}
