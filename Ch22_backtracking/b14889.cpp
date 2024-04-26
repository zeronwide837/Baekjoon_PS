#include <iostream>
#include <cmath>
using namespace std;

int arr[20][20];
int N;
int start[12];
int link[12];
bool visit[12];
int ans = -1;

void stat(int srt, int cnt)
{
	if (cnt == N / 2)
	{
		int tmp1 = 0;
		int tmp2 = 0;
		for (int i = 0; i < N; i++)
		{
			if (visit[i])
			{
				start[tmp1] = i;
				tmp1++;
			}
			else
			{
				link[tmp2] = i;
				tmp2++;
			}
		}
		tmp1 = 0;
		tmp2 = 0;
		for (int i = 0; i < N / 2 - 1; i++)
			for (int j = i + 1; j < N / 2; j++)
			{
				tmp1 += arr[start[i]][start[j]] + arr[start[j]][start[i]];
				tmp2 += arr[link[i]][link[j]] + arr[link[j]][link[i]];
			}

		int sub = abs(tmp1 - tmp2);
		if (ans > sub || ans == -1) ans = sub;
	}
	else
		for (int i = srt; i < N; i++)
			if (!visit[i])
			{
				visit[i] = true;
				stat(i + 1, cnt + 1);
				visit[i] = false;
			}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> arr[i][j];

	stat(0, 0);
	cout << ans;

	return 0;
}
