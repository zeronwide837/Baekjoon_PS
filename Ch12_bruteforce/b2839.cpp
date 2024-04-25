#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, cnt5, cnt3 = 1;
	cin >> N;

	cnt5 = N / 5;
	if (N % 5 == 0)
	{
		cout << cnt5 << "\n";
		return 0;
	}

	else
	{
		while (1)
		{
			if (N == 5 * cnt5 + 3 * cnt3)
			{
				cout << cnt5 + cnt3 << "\n";
				return 0;
			}
			cnt3++;
			if (N < 5 * cnt5 + 3 * cnt3 && cnt5 > 0) cnt5--;
			if (cnt5 == 0 && N % 3 != 0)
			{
				cout << -1 << "\n";
				return 0;
			}
		}

	}
}