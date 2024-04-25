#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int T, N, M;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int d = 1; //초기화 필요
		long long ans = 1; //초기화 필요
		cin >> N >> M;
		for (int j = N + 1; j <= M; j++)
		{
			ans *= j;
			ans = ans / d;
			d++;
		}
		cout << ans << "\n";
	}
}