#include <iostream>
#include <string>
#include <map>
using namespace std;

map<string, int> dbj;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M, cnt = 0;
	string tmp;
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		dbj.insert(pair<string, int>(tmp, 1));
	}

	for (int i = 0; i < M; i++)
	{
		cin >> tmp;
		if (dbj.find(tmp) != dbj.end()) dbj[tmp]++;
		else dbj.insert(pair<string, int>(tmp, 1));
	}

	for (const auto& pair : dbj)
		if (pair.second == 2) cnt++;

	cout << cnt << '\n';

	for (const auto& pair : dbj)
	{
		if(pair.second == 2)
			cout << pair.first << '\n';
	}

	return 0;
}
