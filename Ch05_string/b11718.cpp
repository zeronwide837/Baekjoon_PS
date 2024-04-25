#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string S;

	while (1)
	{
		getline(cin, S);
		if (S == "") break;

		cout << S << '\n';
	}

	return 0;
}