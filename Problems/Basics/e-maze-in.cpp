#include <iostream>
using namespace std;

int main(){
	int X_coordinate = 0;
	int Y_coordinate = 0;

	char direction[200];

	cin >> direction;

	for(int i =0;direction[i]!='\0';++i){
		if(direction[i] == 'L'){
			X_coordinate--;
		}
		
		if(direction[i] =='R'){
			X_coordinate++;
		}

		if(direction[i] =='U'){
			Y_coordinate++;
		}

		if(direction[i] == 'D'){
			Y_coordinate--;
		}


	}

	cout << X_coordinate << " " << Y_coordinate;
}