#include <iostream>
using namespace std;

// Algorithm to solve the searching in 2-D array
// The matrix is sorted row-wise and column-wise

// Algo inpplementation

// step 1 : let x be the element we are trying to search in the matrix
// step 2 : let e be the currnt element we are trying to process
// step 3 : start with the top right element or bbottom left element
// step 4 : Loop compare current element with the  element "x"
// step 5 : if e == x return the position of the element
// step 6 : if e > x move to left in the matrix
// step 7 : if e < x move to down in the matrix
// step 8 : repeat the step 3 to 7 until you find the element 
//          if not found retun false

int staircase(int mat[4][4],int n,int x){
    int i = 0;
    int j = n-1;
    while(i < n && j >= 0){
        if(mat[i][j] == x){
            cout<<"Found at {" <<i << " , " << j << " }";
            return 1;
        }
        if (mat[i][j] > x) {
            j--;
        }
        else if(mat[i][j] < x){
            i++;
        }

    }

    if(i == n && j ==0){
        cout << "Element not found ";
    }
    return 0;
}

int main(){

    int mat[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
        };

    staircase(mat,4,11);
    return 0;
}