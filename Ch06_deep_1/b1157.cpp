#include <iostream>
#include <string>
using namespace std;

int arr[26];

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int maxnum, maxidx;
	maxnum = 0;
	maxidx = -1;

	string word;
	cin >> word;

	for (int i = 0; i < word.length(); i++)
	{
		word[i] = toupper(word[i]);
		arr[word[i] - 65]++;
	}

	for (int i = 0; i < 26; i++)
		if (maxnum < arr[i])
		{
			maxnum = arr[i];
			maxidx = i;
		}
	for (int i = 0; i < 26; i++)
	{
		if (i == maxidx) continue;
		if (arr[i] == maxnum)
		{
			cout << "?" << "\n";
			return 0;
		}
	}

	cout << (char)(maxidx + 65);
}