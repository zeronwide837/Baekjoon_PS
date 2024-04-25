#include <iostream>
using namespace std;
int arrx[100000];
int arry[100000];

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N, x, y, maxx = -10000, maxy = -10000, minx = 10000, miny = 10000;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> x >> y;
		arrx[i] = x;
		arry[i] = y;
	}

	for (int i = 0; i < N; i++)
	{
		if (maxx < arrx[i]) maxx = arrx[i];
		if (maxy < arry[i]) maxy = arry[i];
		if (minx > arrx[i]) minx = arrx[i];
		if (miny > arry[i]) miny = arry[i];
	}

	cout << (maxx - minx) * (maxy - miny) << "\n";
}