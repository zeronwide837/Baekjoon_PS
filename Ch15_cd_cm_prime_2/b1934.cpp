#include <iostream>
using namespace std;

int lcm[1000];
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T, A, B, tmp, gcd, iA, iB;

	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> A >> B;
		iA = A;
		iB = B;
		while (1)
		{
			if (A <= B)
			{
				if (B % A != 0)
				{
					tmp = B;
					B = tmp % A;
				}
				else
				{
					gcd = A;
					lcm[i] = iA * iB / gcd;
					break;
				}
			}
			else
			{
				if (A % B != 0)
				{
					tmp = A;
					A = tmp % B;
				}
				else
				{
					gcd = B;
					lcm[i] = iA * iB / gcd;
					break;
				}
			}
		}
	}

	for (int i = 0; i < T; i++) cout << lcm[i] << '\n';
	return 0;

}
