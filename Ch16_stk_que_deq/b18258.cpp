#include <iostream>
#include <queue>
using namespace std;

queue<int> Q;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, tmp;
	cin >> N;
	string cmd;

	while (N--)
	{
		cin >> cmd;
		if (cmd == "push")
		{
			cin >> tmp;
			Q.push(tmp);
		}

		else if (cmd == "pop")
		{
			if (!Q.empty())
			{
				cout << Q.front() << '\n';
				Q.pop();
			}
			else cout << -1 << '\n';
		}

		else if (cmd == "size")
			cout << Q.size() << '\n';

		else if (cmd == "empty")
		{
			if (Q.empty()) cout << 1 << '\n';
			else cout << 0 << '\n';
		}

		else if (cmd == "front")
		{
			if (Q.empty()) cout << -1 << '\n';
			else cout << Q.front() << '\n';
		}

		else
		{
			if (Q.empty()) cout << -1 << '\n';
			else cout << Q.back() << '\n';
		}
	}

	return 0;
}