#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long int A, B, iA, iB, lcm, tmp, gcd;

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
				lcm = iA * iB / gcd;
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
				lcm = iA * iB / gcd;
				break;
			}
		}
	
	}

	cout << lcm << '\n';
	return 0;

}
