#include <iostream>
using namespace std;

int main() {
	int duration;
	cin >> duration;
	int HH, MM;

	int SH, SM, EH, EM;

	while (duration--) {
		cin >> SH >> SM >> EH >> EM;

		HH = EH - SH;

		MM = EM - SM;

		if (MM < 0) {
			MM = 60 + MM;
			HH = HH - 1;
		}

		cout << HH << " " << MM << endl;
	}
}