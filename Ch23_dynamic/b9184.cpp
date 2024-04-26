#include <iostream>
using namespace std;

int arr[21][21][21];
int ws(int a, int b, int c)
{
	if (a <= 0 || b <= 0 || c <= 0) return 1;
	if (a > 20 || b > 20 || c > 20) return ws(20, 20, 20);

	if (arr[a][b][c]) return arr[a][b][c];

	if (a < b && b < c)
	{
		arr[a][b][c] = ws(a, b, c - 1) + ws(a, b - 1, c - 1) - ws(a, b - 1, c);
		return arr[a][b][c];
	}

	arr[a][b][c] = ws(a - 1, b, c) + ws(a - 1, b - 1, c) + ws(a - 1, b, c - 1) - ws(a - 1, b - 1, c - 1);
	return arr[a][b][c];
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, c;
	while (1)
	{
		cin >> a >> b >> c;
		if (a == -1 && b == -1 && c == -1) break;

		cout << "w(" << a << ", " << b << ", " << c << ") = " << ws(a, b, c) << '\n';
	}
}
