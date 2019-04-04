#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    char A[1000];

    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    
    
    for(int i = 0; i < n; i++){
        for(int j = i;j < n;++j){
            
            for(int k = i; k <= j; k++){
                cout << A[k] << " ";

            } 
            cout << "\n";
        }
    }

    return 0;
}


