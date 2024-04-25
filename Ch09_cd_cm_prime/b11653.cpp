#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N, div;

	cin >> N;
	div = 2;

	while(N != 1)
	{
		if (N % div == 0)
		{
			cout << div << "\n";
			N /= div;
		}

		if (N % div != 0) div++;
	}
	return 0;
}