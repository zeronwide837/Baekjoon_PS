#include <iostream>
using namespace std;

int arr[1000001] = { 0 };

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N, minnum, maxnum;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	maxnum = arr[0];
	minnum = arr[0];

	for (int i = 0; i < N; i++)
	{
		if (maxnum < arr[i]) maxnum = arr[i];
		if (minnum > arr[i]) minnum = arr[i];
	}

	cout << minnum << " " << maxnum << "\n";
}