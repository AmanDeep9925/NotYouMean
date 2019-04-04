#include <iostream>
using namespace std;

int main() {
	int days;
	cin >> days;
	int Tofee = 0;
	int r , x, can_run, have_to_run;
	while (days--) {
		cin >> r >> x;
		can_run = 100 * x;
		have_to_run = 2*(22.0/7)*r;
		if(can_run >=have_to_run){
			Tofee++;
		}
	}
	cout << Tofee <<"\n";
}