#include <iostream>
#include <algorithm>
using namespace std;

constexpr int MAX = 1000001;
bool prime[MAX];

inline void change_bool(int strt, int acc, bool flag)
{
	for (int i = strt; i < MAX; i += acc)
		prime[i] = flag;
}

void eratosthenes() {
	std::fill_n(prime, MAX, false);
	prime[2] = true;
	prime[3] = true;
	change_bool(5, 6, true);
	change_bool(7, 6, true);

	for (int i = 5, j = 25; j < MAX;)
	{
		int nxt = (i - 3) % 6;
		if (prime[i] == true)
		{
			int addi = i * 6;
			change_bool(j, addi, false);
			change_bool(nxt * i + j, addi, false);
		}
		i += nxt;
		j = i * i;
	}
}


int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int M, N;
	cin >> M >> N;
	eratosthenes();

	for (int i = M; i <= N; i++)
		if (prime[i] == true) cout << i << '\n';

	return 0;
}
