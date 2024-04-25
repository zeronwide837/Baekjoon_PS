#include <iostream>
using namespace std;

int main(void)
{
	int H, M;
	cin >> H >> M;

	if (M < 45)
	{
		if (H != 0) cout << H - 1 << " " << 15 + M << endl;
		else cout << 23 << " " << 15 + M << endl;
	}
	else cout << H << " " << M - 45 << endl;
	return 0;
}