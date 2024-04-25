#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	string word;
	cin >> word;
	N = word.length();

	for (int i = 0; i < N/2; i++)
	{
		if (word[i] == word[N - 1 - i]) continue;
		else
		{
			cout << 0 << "\n";
			return 0;
		}
	}
	cout << 1 << "\n";
	return 0;
}