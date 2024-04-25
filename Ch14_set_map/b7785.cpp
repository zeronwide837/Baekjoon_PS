#include <iostream>
#include <map>
using namespace std;

map<string, string, greater<string>>logs;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	string name, mov;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> name >> mov;
		if (mov == "enter") logs.insert(pair<string, string>(name, mov));
		else logs.erase(name);
	}

	for (const auto& pair : logs)
		cout << pair.first << '\n';
}
