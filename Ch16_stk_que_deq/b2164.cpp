#include <iostream>
#include <queue>
using namespace std;

queue<int> Q;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	for (int i = 1; i <= N; i++)
		Q.push(i);

	while (Q.size() != 1)
	{
		Q.pop();
		Q.push(Q.front());
		Q.pop();
	}

	cout << Q.front() << '\n';
	return 0;

}