#include <iostream>
using namespace std;

int arr[30] = { 0 };

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int idx;

	for (int i = 0; i < 28; i++)
	{
		cin >> idx;
		arr[idx - 1] = 1;
	}

	for (int i = 0; i < 30; i++)
	{
		if (arr[i] == 0) cout << i + 1 << "\n";
	}
}