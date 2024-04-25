#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

map<string, int> dict;
vector<string> name;
vector<string> result;

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
		name.push_back(tmp);
		dict.insert(pair<string, int>(tmp, i));
	}
	
	for (int i = 0; i < M; i++)
	{
		cin >> tmp;
		if (tmp[0] >= 65 && tmp[0] <= 90)
			result.push_back(to_string(dict[tmp]+1));
		else result.push_back(name[stoi(tmp) - 1]);
	}

	for (int i = 0; i < result.size(); i++)
		cout << result[i] << '\n';
	
	return 0;
}
