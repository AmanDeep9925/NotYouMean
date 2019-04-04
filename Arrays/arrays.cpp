#include <iostream>
using namespace std;

int main(){
	int M,N;
	cin >> M >> N;

	int A[10][10];

	for (int i = 0; i < M; ++i)
	{
		for(int j = 0; j < N; ++j){
			cin >> A[i][j];
		}
	}
	

	for (int i = 0; i < N; ++i)
	{
		for(int j = 0;j < M; ++j){
			cout <<  A[j][i] << " ";
		}
		cout << "\n";
	}
}
