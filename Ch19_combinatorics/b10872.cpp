#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, tmp = 1;
	cin >> N;

	if (N == 1 || N == 0)
	{
		cout << 1 << '\n';
		return 0;
	}

	for (int i = 2; i <= N; i++)
	{
		tmp *= i;
	}

	cout << tmp << '\n';
	return 0;
}