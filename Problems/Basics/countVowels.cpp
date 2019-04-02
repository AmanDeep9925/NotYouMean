#include<iostream>
using namespace std;
int main() {
    long long int t, c, i, ans;
    string s;
    cin >> t;
    while (t--) {
        cin >> s;
        int n = s.length();
        ans = 0;
        c = 0;
        for (i = n - 1; i >= 0; --i) 
        {

            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'
                    || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
                c += n - i;
            ans += c;
        }
        cout << ans << endl;
    }
}
