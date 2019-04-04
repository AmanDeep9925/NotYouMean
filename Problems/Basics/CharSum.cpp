#include <iostream>
using namespace std;

int main() {
	char str[1000];
	cin >> str;
	int sum = 0;
	for (int i = 0 ; str[i] != '\0'; ++i) {
		sum = sum + str[i] - 96;
	}
	cout <<sum;
}