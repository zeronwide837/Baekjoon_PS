#include <iostream>
#include <set>
#include <string>
using namespace std;

set <string> S;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, num = 0;
	string tmp;

	cin >> N;

	for(int i = 0; i < N; i++)
	{
		cin >> tmp;
		if (tmp == "ENTER")
		{
			num += S.size();
			S.clear();
		}
		else S.insert(tmp);
		if (i == N - 1) num += S.size();
	}

	cout << num << '\n';
	return 0;
}