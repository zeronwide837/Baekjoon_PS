#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N, M, cnt, min, sum;
	cnt = 0;
	min = -1;
	sum = 0;

	cin >> M;
	cin >> N;
	for (int i = M; i <= N; i++) {
		for (int j = 1; j <= i; j++)
			if (i % j == 0) cnt++;
		if (cnt == 2) {
			if (min == -1)
				min = i;
			sum += i;
		}
		cnt = 0;
	}
	if (min == -1) cout << -1 << "\n";
	else cout << sum << "\n" << min << "\n";
}
