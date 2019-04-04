#include <iostream>
using namespace std;

int main() {
	int N, i = 1;
	cin >> N;

	while (1) {
		N = N - 1;
		if (N <= 0) {
			cout << "Patlu \n";
			break;
		}
		N = N - 2*i;
		if(N<=0){
			cout << "Motu \n";
			break;
		}
		i++;
	}
}