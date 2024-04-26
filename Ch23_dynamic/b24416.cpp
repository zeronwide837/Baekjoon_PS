#include <iostream>
using namespace std;

int arr[40];
int cnt1 = 0, cnt2 = 0;

int fib(int n)
{
	if (n == 1 || n == 2)
	{
		cnt1++;
		return 1;
	}
	else return fib(n - 1) + fib(n - 2);
}

int fibonacci(int n)
{
	arr[0] = 1;
	arr[1] = 1;
	for (int i = 2; i < n; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
		cnt2++;
	}
	return arr[n];
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	fib(n);
	fibonacci(n);

	cout << cnt1 << ' ' << cnt2;

	return 0;
}
