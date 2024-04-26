#include <iostream>
using namespace std;

int arr[11];
int ops[4];
int N;
int mymax = -1000000001;
int mymin = 1000000001;

void ans(int result, int idx)
{
	if (idx == N)
	{
		if (result > mymax) mymax = result;
		if (result < mymin) mymin = result;
		return;
	}

	for (int i = 0; i < 4; i++)
	{
		if (ops[i] > 0)
		{
			ops[i]--;
			if (i == 0) ans(result + arr[idx], idx + 1);
			else if (i == 1) ans(result - arr[idx], idx + 1);
			else if (i == 2) ans(result * arr[idx], idx + 1);
			else ans(result / arr[idx], idx + 1);
			ops[i]++;
		}
	}
	return;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> arr[i];
	for (int i = 0; i < 4; i++)
		cin >> ops[i];
	ans(arr[0], 1);
	cout << mymax << '\n';
	cout << mymin << '\n';

	return 0;
}
