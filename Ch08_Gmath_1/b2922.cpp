#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, idx, cnt;

	cin >> N;
	idx = 1;
	cnt = 1;

	while (N > idx)
	{
		idx += 6 * cnt;
		cnt++;
	}

	cout << cnt << "\n";
	return 0;
}