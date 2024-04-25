#include <iostream>
using namespace std;

int cards[100];
int sums[161700];

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M, max, idx;

	cin >> N >> M;
	max = 0;
	idx = 0;

	for (int i = 0; i < N; i++) cin >> cards[i];

	for (int i = 0; i < N - 2; i++)
		for (int j = i + 1; j < N - 1; j++)
			for (int k = j + 1; k < N; k++)
			{
				sums[idx] = cards[i] + cards[j] + cards[k];
				idx++;
			}

	for (int i = 0; i <= idx; i++) if (max < sums[i] && sums[i] <= M) max = sums[i];

	cout << max << "\n";

}
