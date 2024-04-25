#include <iostream>
#include <algorithm>
using namespace std;

int arr[1000];

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N, k;

	cin >> N >> k;

	for (int i = 0; i < N; i++) cin >> arr[i];
	sort(arr, arr + N);

	cout << arr[N - k] << "\n"; 
	return 0;
}
