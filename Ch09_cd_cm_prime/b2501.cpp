#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, K, idx = 0;
	cin >> N >> K;
	
	for (int i = 1; i <= N; i++)
	{
		if (N % i == 0) idx++;
		if (idx == K)
		{
			cout << i << "\n";
			return 0;
		}
	}

	if (idx < K) cout << 0 << "\n";
	return 0;
}
