#include <iostream>
using namespace std;

int main(void)
{
	int X, N, a, b, bill;
	cin >> X;
	cin >> N;
	bill = 0;
	for (int i = 1; i < N + 1; i++)
	{
		cin >> a >> b;
		bill += a * b;
	}
	if (bill == X) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}