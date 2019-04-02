#include <iostream>
#include <cstring>
using namespace std;

bool IsPermUtation(char* X, char* Y) {
	int l1 = strlen(X);
	int l2 = strlen(Y);

	if (l1 != l2) {
		return false;
	}

	int Freq[26] = {0};

	for (int i = 0; i < l1; ++i) {

		Freq[X[i] - 'a']++;
	}

	for (int i = 0; i < l2; i++) {

		Freq[Y[i] - 'a']--;
	}

	for (int i = 0; i < 26; ++i) {

		if (Freq[i] != 0) {
			return false;
		}
	}

	return true;
}


int main() {

	char A[100],B[100];

	cin>>A>>B;

	if(IsPermUtation(A,B)){
		cout<<"Yes, It's a permutation.";
	}

	else{
		cout <<"No,It's not a permutation.";
	}

}
