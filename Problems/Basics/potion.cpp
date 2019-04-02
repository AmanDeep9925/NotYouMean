#include <iostream>
using namespace std;

int main() {
	long long ISBN;
	cin >> ISBN;
	long sum = 0;
	long rem;
	long sumCoff = 10;
	long digits = 0;
	while (ISBN != 0) {
		ISBN = ISBN / 10;
		digits++;
	}
	if (digits == 10) {
		while (ISBN != 0) {

			rem = ISBN % 10;
			sum = sum + (rem * sumCoff--);
			ISBN = ISBN / 10;
		}

		if (sum % 11 == 0) {
			cout << "Legal ISBN" << "\n";
		}
		else {
			cout << "Illegal ISBN" << "\n";
		}
	}
	else {
		cout << "Illegal ISBN";
		exit;
	}

}

