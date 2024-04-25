#include<iostream>
using namespace std;
int paper[100][100];

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, x, y, cnt;
	cnt = 0;
	cin >> N;

	for(int i = 0; i<N;i++)
	{
		cin >> x >> y;
		for (int j = y; j < y + 10; j++)
			for (int k = x; k < x + 10; k++)
			{
				if (!paper[j][k]) {
					cnt++;
					paper[j][k] = 1;
				}
			}

	}
	cout << cnt << "\n";
}