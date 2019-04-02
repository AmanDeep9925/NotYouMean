#include <iostream>
using namespace std;

void primeNumbers(long long int num) {
	bool checkPrime[num + 1];

	for(int i=0;i<num;++i){
		checkPrime[i] = true;
	}

	for(int i=2;i*i<num;++i){
		if(checkPrime[i] == true){
			for(int j = i*i;j<=num;j+=i){
				checkPrime[j] = false;
			}
		}
	}

	for(int p = 2;p<=num;++p){
		if(checkPrime[p] && p <num){
			cout << p << " ";
		}
	}
}


int main() {
	long long int num;

	cin >> num;
	primeNumbers(num);
}