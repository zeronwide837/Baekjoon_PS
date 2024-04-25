#include <iostream>
using namespace std;

int arr1[1001];
int arr2[1001];

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, tmp;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		if (tmp > 0) arr1[tmp] = tmp;
		else if (tmp == 0) arr1[tmp] = 1;
		else arr2[-tmp] = tmp;
	}

	for (int i = 1000; i >= 0; i--)
	{
		if (arr2[i] != 0) cout << arr2[i] << "\n";
	}

	for (int i = 0; i < 1001; i++)
	{
		
		if (i == 0 && arr1[i] == 1) cout << 0 << "\n";
		else if (arr1[i] != 0) cout << arr1[i] << "\n";
	}

	return 0;
}
