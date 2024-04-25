#include <iostream>
using namespace std;

int arrx[16], arry[16];

int abs_f(int a, int b)
{
	if (a - b >= 0)
		return a - b;
	else
		return (a - b) * (-1);
}

int n_queen(int x, int y, int num)
{
	for (int i = 0; i < y; i++)
	{
		if (y == arry[i]) return 0;
		if (x == arrx[i]) return 0;
		if (abs_f(x, arrx[i]) == abs_f(y, arry[i])) return 0;
	}

	if (y == num - 1) return 1;
	arrx[y] = x;
	arry[y] = y;
	int cnt = 0;
	for (int i = 0; i < num; i++)
		cnt = cnt + n_queen(i, y + 1, num);
	return cnt;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, cnt = 0;
	cin >> N;
	for (int i = 0; i < N; i++)
		cnt = cnt + n_queen(i, 0, N);

	cout << cnt;
	return 0;
}
