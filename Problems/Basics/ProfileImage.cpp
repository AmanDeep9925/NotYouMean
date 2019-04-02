#include <iostream>
using namespace std;

int main() {
	int L;

	cin >> L;

	int No_of_Photos;

	cin >> No_of_Photos;

	while (No_of_Photos) {
		int height, width;

		cin >> width >> height ;

		if (width < L || height < L) {
			cout << "UPLOAD ANOTHER" << endl;
		}

		else if(width >= L && height >= L){
			if(width == height)
			cout << "ACCEPTED" << endl;
		else
			cout << "CROP IT" << endl;
		}
			
		No_of_Photos--;
	}
}