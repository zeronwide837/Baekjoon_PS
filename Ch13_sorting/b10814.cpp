#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int compare(pair<int, string> a, pair<int, string>b)
{
	return a.first < b.first;
}

vector <pair<int, string>> mem;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	pair<int, string> tmp;
	
	for (int i = 0; i < N; i++)
	{
		cin >> tmp.first >> tmp.second;
		mem.push_back(tmp);
	}

	stable_sort(mem.begin(), mem.end(), compare);
	
	for (int i = 0; i < N; i++)
		cout << mem[i].first << ' ' << mem[i].second << '\n';
}
