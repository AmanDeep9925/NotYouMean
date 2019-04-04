#include <iostream>
using namespace std;

int main()
{	char s[100001];
	int k, i;
	cin >> s;
	cin >> k;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] > 47 && s[i] < 58)
			s[i] = (s[i] - 48 + k) % 10 + 48;
		else if (s[i] > 64 && s[i] < 91)
		{
			s[i] = (s[i] - 65 + k) % 26 + 65;
		}
		else if (s[i] > 96 && s[i] < 123)
			s[i] = (s[i] - 97 + k) % 26 + 97;

	}
	cout << s;
	return 0;
}