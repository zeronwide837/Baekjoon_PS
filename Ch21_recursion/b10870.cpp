#include <iostream>
using namespace std;

int fibo(int a)
{
	if (a == 0) return 0;
	if (a == 1) return 1;
	return fibo(a - 1) + fibo(a - 2);
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	cout << fibo(n);
	return 0;
}
