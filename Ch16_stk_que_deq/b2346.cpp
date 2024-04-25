#include <iostream>
#include <deque>
#include <queue>
using namespace std;

deque<pair<int, int>> dQ;
queue<int> Q;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N,tmp;
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		cin >> tmp;
		dQ.push_back(make_pair(tmp, i));
	}

	while (!dQ.empty())
	{
		tmp = dQ.front().first;
		cout << dQ.front().second << ' ';
		dQ.pop_front();

		if (dQ.empty()) break;

		if (tmp < 0)
		{
			for (int i = 1; i <=  (-1) * tmp; i++)
			{
				dQ.push_front(dQ.back());
				dQ.pop_back();
			}
		}
		else
		{
			for (int i = 1; i < tmp; i++)
			{
				dQ.push_back(dQ.front());
				dQ.pop_front();
			}
		}
	}
	return 0;
}