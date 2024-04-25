#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, K, tmp = 1;
	cin >> N >> K;

	for (int i = 1; i <= K; i++)
	{
		tmp *= N;
		N--;
	}

	for (int i = 1; i <= K; i++)
		tmp /= i;

	cout << tmp << '\n';
	return 0;
}