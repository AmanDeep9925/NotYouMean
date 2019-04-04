#include <iostream>
using namespace std;

bool IsSymmetric(int A[][40], int N) {
	bool Symmetric_to_X;
	bool Symmetric_to_Y;

	int xCounter = 0,yCounter = 0;
	// Checking Symmetricity along Y axis

	for (int i = 0 ; i < N ; ++i) {
		for (int j = 0; j < N ; ++j) {
			if (A[i][j] == A[i][N - j - 1]) {
				yCounter+=1;
			}
			else{
				yCounter+=0;
			}
		}
	}
	if(yCounter == N){
		Symmetric_to_Y = true;
	}
	else{
		Symmetric_to_Y = false;
	}

	// Checking Symmetricity along X axis

	for (int j = 0; j < N ; ++j) {
		for (int i = 0; i < N ; ++i) {
			if (A[i][j] == A[N - i - 1][j]) {
				xCounter+=1;
			}
			else{
				xCounter+=0;
			}
		}
	}

	if(xCounter == N){
		Symmetric_to_X = true;
	}
	else{
		Symmetric_to_X = false;
	}

	if (Symmetric_to_X == Symmetric_to_Y) {
		return true;
	}

}

void getMat(int A[][40], int N) {
	for (int i = 0 ; i < N; ++i) {
		for (int j = 0 ; j < N; ++j) {
			cin >> A[i][j];
		}
	}
}



int main() {
	int N;
	cin >> N;
	int A[40][40];

	// for (int i = 0 ; i < N; ++i) {
	// 	for (int j = 0 ; j < N; ++j) {
	// 		cin >> A[i][j];
	// 	}
	// }

	// // for (int i = 0 ; i < N / 2 ; ++i) {
	// // 	for (int j = 0; j < N / 2 ; ++j) {
	// // 		cout << A[i][j] << "  ";
	// // 		cout << A[i][N - j - 1] << " ";

	// // 	}
	// // 	cout << "\n";
	// // }

	// for (int j = 0; j < N ; ++j) {
	// 	for (int i = 0; i < N ; ++i) {
	// 			cout << A[i][j] << " ";
	// 			cout << A[N-i-1][j] << " ";
	// 		}
	// 	cout <<"\n";
	// 	}
	

	getMat(A, N);
	bool ans = IsSymmetric(A, N);

	cout << ans;

}