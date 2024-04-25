#include <iostream>
#include <deque>
using namespace std;

bool A[100000];
deque<int> dQ;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N,Bi,M,Ci;
	cin >> N;

	for (int i = 0; i < N; i++)
		cin >> A[i];
	for (int i = 0; i < N; i++)
	{
		cin >> Bi;
		if (!A[i]) dQ.push_back(Bi);
	}

	cin >> M;
	for (int i = 0; i < M; i++)
	{
		cin >> Ci;
		dQ.push_front(Ci);
		cout << dQ.back() << " ";
		dQ.pop_back();
	}
	return 0;
}