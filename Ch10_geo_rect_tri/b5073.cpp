#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, c;

	while (1)
	{
		cin >> a >> b >> c;
		if (a == b && b == c && c == a)
		{
			if (a == 0) break;
			else cout << "Equilateral" << "\n";
		}
		else
		{
			if (a >= b + c || b >= a + c || c >= a + b) cout << "Invalid" << "\n";
			else if (a == b || b == c || c == a) cout << "Isosceles" << "\n";
			else cout << "Scalene" << "\n";
		}
	}
}
