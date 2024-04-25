#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int A, B;

	while (1)
	{
		cin >> A >> B;
		if (A == 0 && B == 0) break;
		if (B % A == 0)cout << "factor" << "\n";
		else if (A % B == 0)cout << "multiple" << "\n";
		else cout << "neither" << "\n";
	}
}