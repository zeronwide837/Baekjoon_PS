#include <iostream>
using namespace std;

double arr[1001] = { 0 };

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, maxsc;
	double total;
	cin >> N;
	maxsc = 0;
	total = 0;

	for (int i = 1; i <= N; i++)
	{
		cin >> arr[i];
		if (maxsc < arr[i]) maxsc = arr[i];
	}

	for (int i = 1; i <= N; i++)
	{
		double tmp = arr[i];
		arr[i] = tmp / maxsc * 100.0;
		total += arr[i];
	}

	cout << total / N << "\n";
}