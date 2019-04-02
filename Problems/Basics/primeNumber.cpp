// #include <iostream>
// using namespace std;

// int Sieve(int n) {
// 	bool prime[n + 1];

// 	for (int i = 0; i < n; ++i) {
// 		prime[i] = true;
// 	}

// 	for (int i = 2; i * i <= n; i++) {
// 		if (prime[i] == true) {
// 			for (int j = i * 2; j <= n; ++j) {
// 				prime[j] = false;
// 			}
// 		}
// 	}
// 	if (prime[n])
// 		return 1;
// 	else
// 		return 0;
// }

// void primeNumbers(int num, int val) {
// 	int PrimeDigit;
// 	bool checkPrime[num + 1];

// 	for (int i = 0; i < num; ++i) {
// 		checkPrime[i] = true;
// 	}

// 	for (int i = 2; i * i < num; ++i) {
// 		if (checkPrime[i] == true) {
// 			for (int j = i * i; j <= num; j += i) {
// 				checkPrime[j] = false;
// 			}
// 		}
// 	}

// 	for (int p = 2; p <= num; ++p) {
// 		if (checkPrime[p] && p >= val) {
// 			int checkPoint = 0;
// 			PrimeDigit = p;
// 			while (PrimeDigit != 0) {
// 				checkPoint += PrimeDigit % 10;
// 				PrimeDigit = PrimeDigit / 10;
// 			}
// 			int k = Sieve(checkPoint);
// 			if (k == 1)
// 				cout << p << " ";
// 		}
// 	}
// }


// int main() {
// 	int num1, num2;

// 	cin >> num1 >> num2;
// 	if (num1 > num2)
// 		primeNumbers(num1, num2);
// 	else
// 		primeNumbers(num2, num1);
// }

#include<bits/stdc++.h>
using namespace std;
int Sieve(long long int n)
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

int SieveOfEratosthenes(long long int n, long long int x)
{
	long long int s;

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
			int m = 0;
			s = p;
			while (s != 0)
			{
				m += s % 10;
				s = s / 10;
			}
			int k = Sieve(m);
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
		SieveOfEratosthenes(a, b);
	else
		SieveOfEratosthenes(b, a);


}