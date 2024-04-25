#include <iostream>
#include <cmath>
using namespace std;

bool isprime(long long int n)
{
	if (n == 0 || n == 1) return false;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0) return false;
	return true;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T; // n을 long long int로 선언해야 함
	long long int n;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> n;
		while (1)
		{
			if (isprime(n))
			{
				cout << n << '\n';
				break;
			}
			else n++;
		}
	}

	return 0;
}
