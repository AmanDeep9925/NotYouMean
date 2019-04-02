#include <iostream>
#include <string.h>
using namespace std;

void checkPalindrome(char str[]) {
	int left = 0;
	int right = strlen(str) - 1;

	while(left < right){
		if(str[left++] != str[right--]){
			cout << "NO";
			return;
		}
	}

	cout << "YES";
}

int main() {
	char str[100];

	cin >> str;

	checkPalindrome(str);
}