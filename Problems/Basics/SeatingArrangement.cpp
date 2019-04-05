#include <iostream>
using namespace std;

int main() {
	long long testcase;
	cin >> testcase;
	int seatNumber;
	while (testcase--) {
		cin >> seatNumber;
		if (seatNumber >= 1 && seatNumber <= 108) {
			switch (seatNumber % 12 ) {
			case 1 : cout << seatNumber + 11 << " " << "WS\n";	break;
			case 2 : cout << seatNumber + 9 << " " << "MS\n";	break;
			case 3 : cout << seatNumber + 7 << " " << "AS\n";	break;
			case 4 : cout << seatNumber + 5 << " " << "AS\n";	break;
			case 5 : cout << seatNumber + 3 << " " << "MS\n";	break;
			case 6 : cout << seatNumber + 1 << " " << "WS\n";	break;
			case 7 : cout << seatNumber - 1 << " " << "WS\n";	break;
			case 8 : cout << seatNumber - 3 << " " << "MS\n";	break;
			case 9 : cout << seatNumber - 5 << " " << "AS\n";	break;
			case 10 : cout << seatNumber - 7 << " " << "AS\n";	break;
			case 11	: cout << seatNumber - 9 << " " << "MS\n";	break;
			case 0 : cout << seatNumber - 11 << " " << "WS\n"; break;
			}
		}
	}
}