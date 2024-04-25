#include <iostream>
using namespace std;

int arr[9][9] = { 0 };

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int num, max, xc, yc;
	max = 0;
	xc = 0;
	yc = 0;

	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
		{
			cin >> num;
			arr[i][j] = num;
		}

	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
		{
			if (max <= arr[i][j])
			{
				max = arr[i][j];
				xc = i + 1;
				yc = j + 1;
			}
		}

	cout << max << "\n";
	cout << xc << " " << yc << "\n";
	return 0;
}