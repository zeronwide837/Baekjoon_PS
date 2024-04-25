#include <iostream>
using namespace std;

int arr[9];
int N, M;

void dfs(int num, int cnt)
{
	if (cnt == M)
	{
		for (int i = 0; i < M; i++)
			cout << arr[i] << ' ';
		cout << '\n';
		return;
	}
	for (int i = num - 1 ; i < N; i++)
	{
		arr[cnt] = i + 1;
		dfs(i+1,cnt + 1);
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> N >> M;
	dfs(1,0);

}
