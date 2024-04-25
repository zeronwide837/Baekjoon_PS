#include <iostream>
using namespace std;

int main(void)
{
	int n, k;
	cin >> n;
	k = 0;
	for (int i = 1; i < n + 1; i++)
	{
		k += i;
	}
	cout << k << endl;
	return 0;
}