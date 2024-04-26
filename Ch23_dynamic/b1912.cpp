#include <iostream>
using namespace std;

int seq[100001];
int dp[100001];

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, maxsum;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> seq[i];
		dp[i] = seq[i];
	}

	maxsum = dp[0];
	for (int i = 1; i < n; i++)
	{
		dp[i] = max(dp[i], dp[i - 1] + seq[i]);
		if (dp[i] > maxsum) maxsum = dp[i];
	}

	cout << maxsum << '\n';

	return 0;
}
