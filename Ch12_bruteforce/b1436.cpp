#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, cnt = 0, idx = 666;
	string demo = to_string(666);
	cin >> N;

	while (1)
	{
		string title = to_string(idx);
		if (title.find(demo) != string::npos) cnt++;
		if (cnt == N)
		{
			cout << idx << "\n";
			return 0;
		}
		idx++;
	}
	return 0;
}
