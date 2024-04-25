#include <iostream>
using namespace std;

int main(void)
{
	int A, B, C;
	cin >> A >> B;
	cin >> C;

	if (B + C > 59)
	{
		if (A + (B + C) / 60 < 24) cout << A + (B + C) / 60 << " " << (B + C) % 60 << endl;
		else cout << (A + (B + C) / 60) - 24 << " " << (B + C) % 60 << endl;
	}

	else cout << A << " " << B + C << endl;
	return 0;
}