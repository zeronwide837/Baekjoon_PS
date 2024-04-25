#include <iostream>
#include <map>
using namespace std;

map<string, bool> words;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M, ans = 0;
	string tmp;
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		words.insert(pair<string, bool>(tmp, true));
	}

	for (int i = 0; i < M; i++)
	{
		cin >> tmp;
		if (words[tmp] == true) ans++;
	}

	cout << ans << '\n';
	return 0;
}
