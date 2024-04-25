#include <iostream>
using namespace std;

int arr[2];

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int x, y, w, h, min;

	cin >> x >> y >> w >> h;

	if (x > w - x) arr[0] = w - x;
	else arr[0] = x;

	if (y > h - y) arr[1] = h - y;
	else arr[1] = y;

	if (arr[0] > arr[1]) min = arr[1];
	else min = arr[0];

	cout << min << "\n";

}
