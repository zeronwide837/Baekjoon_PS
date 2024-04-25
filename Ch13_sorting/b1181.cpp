#include <iostream>
#include <algorithm>
using namespace std;

string words[20000];

int comp(string a, string b)
{
	if (a.length() == b.length()) return a < b;
	else return a.length() < b.length();
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) cin >> words[i];

	sort(words, words + N, comp);

	cout << words[0] << '\n';

	for (int i = 1; i < N; i++)
	{
		if (words[i] == words[i - 1]) continue;
		cout << words[i] << '\n';
	}
	return 0;

}
