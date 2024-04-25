#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N, v;
	int* n = new int[N];

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> n[i];
	}
	cin >> v;
	int cnt = 0;
	for (int i = 0; i < N; i++)
	{
		if (n[i] == v) cnt++;
	}
	cout << cnt << "\n";
	return 0;
}