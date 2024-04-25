#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int sum = 0;
	string S;

	cin >> S;
	for (int i = 0; i < S.length(); i++)
	{
		sum += 2;
		if ((int)S[i] - 65 <= 2) sum += 1;
		else if((int)S[i] - 65 <= 5) sum += 2;
		else if ((int)S[i] - 65 <= 8) sum += 3;
		else if ((int)S[i] - 65 <= 11) sum += 4;
		else if ((int)S[i] - 65 <= 14) sum += 5;
		else if ((int)S[i] - 65 <= 18) sum += 6;
		else if ((int)S[i] - 65 <= 21) sum += 7;
		else sum += 8;
	}

	cout << sum << "\n";
	return 0;
}