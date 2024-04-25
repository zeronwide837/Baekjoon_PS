#include <iostream>
#include <set>
using namespace std;

set <int> S;
int arr[2];

int gcd(int a, int b)
{
	while (b != 0) {
		int tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}

int getGCD(std::set<int>& s)
{
	if (s.empty()) return -1;
	
	int result = *s.begin();

	for (auto it = std::next(s.begin()); it != s.end(); ++it)
		result = gcd(result, *it);

	return result;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, tmp, init, last;

	cin >> N;
	cin >> arr[0];
	init = arr[0];

	for (int i = 1; i < N; i++)
	{
		cin >> arr[1];
		last = arr[1];
		S.insert(arr[1] - arr[0]);
		arr[0] = arr[1];
	}

	tmp = getGCD(S);

	cout << (last - init) / tmp - N + 1 << '\n';
	return 0;
}
