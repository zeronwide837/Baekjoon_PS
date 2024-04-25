#include <iostream>
using namespace std;
int arr[3];
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int max = 0, sum = 0;

	cin >> arr[0] >> arr[1] >> arr[2];
	
	for (int i = 0; i < 3; i++)
	{
		sum += arr[i];
		if (arr[i] > max) max = arr[i];
	}

	if (max * 2 >= sum)
	{
		int tmp = max;
		max = sum - max - 1;
		sum = sum - tmp + max;
	}

	cout << sum << "\n";

}