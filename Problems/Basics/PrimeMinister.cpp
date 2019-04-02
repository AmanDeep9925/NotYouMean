#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int Ifprime(long long int n)
{

	bool prime[n + 1];
	memset(prime, true, sizeof(prime));

	for (int p = 2; p * p <= n; p++)
	{

		if (prime[p] == true)
		{

			for (int i = p * 2; i <= n; i += p)
				prime[i] = false;
		}
	}



	if (prime[n])
		return 1;
	else
		return 0;
}

int PrimeMinisterNumber(long long int n, long long int x)
{
	long long int sum;

	bool prime[n + 1];
	memset(prime, true, sizeof(prime));
	for (long long int p = 2; p * p <= n; p++)
	{
		if (prime[p] == true)
		{
			for (long long int i = p * 2; i <= n; i += p)
				prime[i] = false;
		}
	}

	for (long long int p = 2; p <= n; p++)
	{
		if (prime[p] && p >= x)
		{
			int checkPoint = 0;
			sum = p;
			while (sum != 0)
			{
				checkPoint += sum % 10;
				sum = sum / 10;
			}
			int k = Ifprime(checkPoint);
			if (k == 1)
				cout << p << " ";

		}
	}
}
int main()
{
	int k;
	long long int a, b, i, j;
	cin >> a >> b;
	if (a > b)
		PrimeMinisterNumber(a, b);
	else
		PrimeMinisterNumber(b, a);


}