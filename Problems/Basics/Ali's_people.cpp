#include<iostream>
 
using namespace std;
 
bool check_sum(string str)
{
    int sum1, sum2, sum3, sum4;
    sum1 = str[0] + str[1];
    sum2 = str[3] + str[4];
    sum3 = str[4] + str[5];
    sum4 = str[7] + str[8];
    if((sum1 % 2 == 0) && (sum2 % 2 == 0) && (sum3 % 2 == 0) && (sum4 % 2 == 0))
        return true;
    else
        return false;
}
 
bool check_vowel(string str)
{
    char check = str[2];
    if((check == 'A') || (check == 'E') || (check == 'I') || (check == 'O') || (check == 'U') || (check == 'Y'))
        return false;
    else
        return true;
}
 
int main()
{
    string str;
    cin >> str;
    if(check_sum(str) && check_vowel(str))
        cout << "valid";
    else
        cout << "invalid" << endl;
    
    
    return 0;
}