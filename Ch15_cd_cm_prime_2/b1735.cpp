#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a1, a2, b1, b2, ans1, ans2, tmp, gcd = 1, ia1, ia2;
	cin >> a1 >> a2;
	cin >> b1 >> b2;

	ans1 = a1 * b2 + b1 * a2;
	ans2 = a2 * b2;
	ia1 = ans1;
	ia2 = ans2;

	while (1)
	{
		if (ans1 <= ans2)
		{
			if (ans2 % ans1 != 0)
			{
				tmp = ans2;
				ans2 = tmp % ans1;
			}
			else
			{
				gcd = ans1;
				break;
			}
		}
		else
		{
			if (ans1 % ans2 != 0)
			{
				tmp = ans1;
				ans1 = tmp % ans2;
			}
			else
			{
				gcd = ans2;
				break;
			}
		}
	}
	
	cout << ia1 / gcd << ' ' << ia2 / gcd << '\n';
	return 0;
}