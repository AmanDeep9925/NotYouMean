#include <iostream>
using namespace std;

int main(){
	int size;
	int arr[1000];
	cin >> size;
	int m = 1000000007;
	for(int i = 0;i < size;++i){
		cin >> arr[i];
	}

	long answer = 1;

	for(int i =0;i<size;++i){
		answer = (answer * arr[i]) % m;
	}

	cout << answer;
}