#include <iostream>
using namespace std;

int arr[9];
int N, M;

void dfs(int n)
{
	if (n == M)
	{
		for (int i = 0; i < M; i++)
			cout << arr[i] << ' ';
		cout << '\n';
		return;
	}
	for (int i = 0; i < N; i++)
	{
		arr[n] = i + 1;
		dfs(n + 1);
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> N >> M;
	dfs(0);

}
