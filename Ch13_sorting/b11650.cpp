#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<pair<int, int>> vec;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, x, y;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> x >> y;
		vec.push_back({ x,y });
	}

	sort(vec.begin(), vec.end());
	for (int i = 0; i < N; i++) cout << vec[i].first << ' ' << vec[i].second << "\n";

	return 0;
}
