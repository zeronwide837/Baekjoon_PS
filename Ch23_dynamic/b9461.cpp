#include <iostream>
using namespace std;

long long arr[101] = { 0,1,1, };
long long Pado(int N)
{
	if (N < 3) return arr[N];
	else if (arr[N] == 0) arr[N] = Pado(N-2) + Pado(N-3);
	return arr[N];
}

int main(void)
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T, N;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> N;
		cout << Pado(N) << '\n';
	}

	return 0;

}
