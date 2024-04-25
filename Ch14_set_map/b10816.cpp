#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<int,int> cards;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M, tmp;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		cards[tmp]++;
	}

	cin >> M;
	for (int i = 0; i < M; i++)
	{
		cin >> tmp;
		cout << cards[tmp] << ' ';
	}
	return 0;
}
