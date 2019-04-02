#include <iostream>
using namespace std;

int factorial(int num){
	
	if(num == 0 || num == 1){
		return 1;
	}
	else return num * factorial(num-1);
}

int main(){
	int num;
	cin >> num;

	int ans = factorial(num);
	cout << ans;
	return 0;
}