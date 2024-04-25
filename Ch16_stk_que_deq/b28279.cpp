#include <iostream>
#include <deque>
using namespace std;

deque<int> dQ;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, cmd, tmp;
	cin >> N;

	while (N--)
	{
		cin >> cmd;
		switch (cmd)
		{
		case 1:
			cin >> tmp;
			dQ.push_front(tmp);
			break;

		case 2:
			cin >> tmp;
			dQ.push_back(tmp);
			break;

		case 3:
			if (!dQ.empty())
			{
				cout << dQ.front() << '\n';
				dQ.pop_front();
			}
			else cout << -1 << '\n';
			break;

		case 4:
			if (!dQ.empty())
			{
				cout << dQ.back() << '\n';
				dQ.pop_back();
			}
			else cout << -1 << '\n';
			break;

		case 5:
			cout << dQ.size() << '\n';
			break;

		case 6:
			if (dQ.empty()) cout << 1 << '\n';
			else cout << 0 << '\n';
			break;

		case 7:
			if (!dQ.empty()) cout << dQ.front() << '\n';
			else cout << -1 << '\n';
			break;

		case 8:
			if (!dQ.empty()) cout << dQ.back() << '\n';
			else cout << -1 << '\n';
			break;
		}
	}

	return 0;
}