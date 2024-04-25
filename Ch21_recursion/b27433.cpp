#include <iostream>
using namespace std;

long long int fact(int a)
{
	if (a == 0 || a == 1) return 1;
	return a * fact(a - 1);
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	cout << fact(N);
	return 0;
}
