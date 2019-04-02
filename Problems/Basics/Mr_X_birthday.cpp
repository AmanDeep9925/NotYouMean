#include <iostream>
using namespace std;

int main() {

	int testCase;
	cin >> testCase;

	int Friends, Chocolates;
	while (testCase--) {
		cin >> Friends >> Chocolates;

		if(Chocolates % Friends == 0){
			cout << "Yes \n";
		}
		else{
			cout << "No \n";
		}
	}
	return 0;
}