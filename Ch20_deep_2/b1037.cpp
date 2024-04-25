#include <iostream>
using namespace std;

int arr[1000000];

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int A, max = 1, min;

	cin >> A;
	for (int i = 0; i < A; i++) cin >> arr[i];
	for (int i = 0; i < A; i++)
		if (arr[i] > max) max = arr[i];
	min = max;
	for (int i = 0; i < A; i++)
		if (arr[i] < min) min = arr[i];

	cout << min * max << '\n';
	return 0;


}