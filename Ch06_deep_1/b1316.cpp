#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, cnt, tmp;
	string word, nword;
	cnt = 0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> word;
		tmp = 0;
		for (int j = 0; j < word.length(); j++)
		{
			if (word[j] != word[j + 1])
			{
				nword = word.substr(j + 1);
				if (nword.find(word[j]) != string::npos) tmp += 1;
			}
		}
		if (tmp == 0) cnt++;
	}
	cout << cnt << "\n";
	return 0;
}