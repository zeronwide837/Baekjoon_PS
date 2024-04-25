#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a1, a2, a3;
	cin >> a1 >> a2 >> a3;
	if (a1 + a2 + a3 == 180)
	{
		if (a1 == 60 && a2 == 60 && a3 == 60) cout << "Equilateral" << "\n";
		else if (a1 == a2 || a2 == a3 || a3 == a1) cout << "Isosceles" << "\n";
		else cout << "Scalene" << "\n";
	}

	else cout << "Error" << "\n";
	return 0;
}