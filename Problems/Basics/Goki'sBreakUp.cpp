#include <iostream>
using namespace std;

int main(){
	int testfriend;
	cin >> testfriend;
	int gokis_requi;
	cin >> gokis_requi;
	int Friend;
	while(testfriend--){
		cin >> Friend;
		if(Friend < gokis_requi){
			cout << "NO \n";
		}
		else if(Friend >= gokis_requi){
			cout << "YES \n";
		}
	}
}