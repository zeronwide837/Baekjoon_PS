#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int maxnum, maxidx;
	maxnum = 0;

	int* arr = new int[9];
	for (int i = 0; i < 9; i++)
	{
		cin >> arr[i];
		if (maxnum < arr[i])
		{
			maxnum = arr[i];
			maxidx = i + 1; //ó���� maxidx++ �ߴٰ� Ʋ��(�ʱⰪ -1)
		}
	}

	cout << maxnum << "\n";
	cout << maxidx << "\n";
}