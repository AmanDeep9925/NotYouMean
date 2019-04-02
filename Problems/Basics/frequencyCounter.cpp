#include <iostream>
using namespace std;

int main() {
	string str;

	cin >> str;
	int freq[10];

	for (int i = 0; i < 10; ++i) {
		freq[i] = 0;
	}

	for (int i = 0; i < str.length(); ++i) {
		freq[str[i] - '0']++;
	}

	for (int i = 0; i < 10; ++i) {
		cout << i << " " << freq[i];
		cout << endl;
	}
}