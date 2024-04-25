#include <iostream>
using namespace std;
int arr[100000],idx=0;
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n,nsum = 0;

	while (1)
	{
		cin >> n;
		if (n == -1) break;
		for (int i = 1; i <= n-1; i++)
		{
			if (n % i == 0)
			{
				nsum += i;
				arr[idx] = i;
				idx++;
			}
		}
		if (n == nsum)
		{
			cout << n << " = 1";
			for (int i = 1; i < idx; i++)
			{
				cout << " + " << arr[i];
				arr[i] = 0;
			}
			cout << "\n";
			nsum = 0;
			idx = 0;
		}
		else
		{
			cout << n << " is NOT perfect." << "\n";
			nsum = 0;
			idx = 0;
		}
	}
	return 0;
}