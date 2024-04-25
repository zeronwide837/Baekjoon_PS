#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;

	string S;
	for (int i = 0; i < T; i++)
	{
		cin >> S;
		cout << S[0] << S[S.length() - 1] << "\n";
	}

}