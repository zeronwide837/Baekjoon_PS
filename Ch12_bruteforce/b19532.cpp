#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, c, d, e, f;

	cin >> a >> b >> c >> d >> e >> f;

	for(int i = -999; i < 1000; i++)
		for (int j = -999; j < 1000; j++)
		{
			if (a * i + b * j == c && d * i + e * j == f)
			{
				cout << i << " " << j << "\n";
				return 0;
			}
		}

	return 0;
}
