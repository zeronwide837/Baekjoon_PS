#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int T, C;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> C;
		cout << C / 25 << " ";
		C = C % 25;
		cout << C / 10 << " ";
		C = C % 10;
		cout << C / 5 << " ";
		C = C % 5;
		cout << C << "\n";
	}
}