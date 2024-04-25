#include <iostream>
using namespace std;

int cnt[10001];

int main(void)
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int N, tmp;
	cin >> N;
	for (int i = 0; i < 10001; i++) cnt[i] = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		cnt[tmp] += 1;
	}

	for (int i = 1; i < 10001; i++)
	{
		if (cnt[i] > 0)
			while (cnt[i] > 0)
			{
				cout << i << "\n";
				cnt[i]--;
			}
	}

	return 0;
}
