#include <iostream>
#include <queue>
using namespace std;

queue<int> Q;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, K;
	cin >> N >> K;

	for (int i = 1; i <= N; i++)
		Q.push(i);

	cout << "<";
	while (!Q.empty())
	{
		for (int i = 1; i < K; i++)
		{
			Q.push(Q.front());
			Q.pop();
		}
		cout << Q.front();
		if (Q.size() != 1) cout << ", ";
		Q.pop();
	}
	cout << ">";
	return 0;
}