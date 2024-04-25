#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long long n;

	cin >> n;

	cout << (n - 1) * n / 2 << "\n";
	cout << 2 << "\n";
	return 0;

}
