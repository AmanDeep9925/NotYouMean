#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;

	for(int i=0;;i++){
		if(n-1 <= 0){
			cout << "Patlu";
			break;
		}
		else n=n-1;
		if((n-2*i) <=0){
			cout << "Motu";
			break;
		}
		else n=n-(2*i);
	}
}