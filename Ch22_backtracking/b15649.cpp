#include <iostream>
using namespace std;

int arr[9];
bool visited[9];
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
		if (!visited[i + 1])
		{
			visited[i + 1] = true;
			arr[n] = i+1;
			dfs(n + 1);
			visited[i + 1] = false;
		}
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
