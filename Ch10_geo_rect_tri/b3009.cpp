#include <iostream>
using namespace std;

int arrx[1001];
int arry[1001];

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int x, y;
	for (int i = 0; i < 3; i++)
	{
		cin >> x >> y;
		arrx[x] += 1;
		arry[y] += 1;
	}

	for (int i = 1; i < 1001; i++)
	{
		if (arrx[i] == 1) x = i;
		if (arry[i] == 1) y = i;
	}

	cout << x << " " << y << "\n";

}