#include <iostream>
#include <algorithm>

using namespace std;
int arr[500000];

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M, tmp;
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> arr[i];

	sort(arr, arr + N);

	cin >> M;
	for (int i = 0; i < M; i++)
	{
		cin >> tmp;
		if (binary_search(arr, arr + N, tmp)) cout << 1 << ' ';
		else cout << 0 << ' ';
	}

	return 0;
	
}
