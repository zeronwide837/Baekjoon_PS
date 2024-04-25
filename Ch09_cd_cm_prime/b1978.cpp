#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N, tmp, cnt, ans;
	cnt = 0;
	ans = 0;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		for (int j = 1; j <= tmp; j++) if (tmp % j == 0) cnt++;
		if (cnt == 2) ans++;
		cnt = 0;
	}
	cout << ans << "\n";
	return 0;
}