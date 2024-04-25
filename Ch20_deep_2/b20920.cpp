#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>

using namespace std;

unordered_map<string, int> words;

bool comp(pair<string, int>& a, pair<string, int>& b)
{
	if (a.second == b.second)
	{
		if (a.first.length() == b.first.length())
			return a.first < b.first;
		return a.first.length() > b.first.length();
	}
	return a.second > b.second;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	string tmp;

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		if (tmp.length() >= M) words[tmp]++;
	}
	vector<pair<string, int>> vec(words.begin(), words.end());
	sort(vec.begin(), vec.end(), comp);
	for (auto p : vec)
		cout << p.first << '\n';
}
