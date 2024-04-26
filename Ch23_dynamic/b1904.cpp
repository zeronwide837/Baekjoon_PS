#include <iostream>
using namespace std;

int N;
long long arr[1000000] = { 0, 1, 2 };

void fibonacci()
{
	for (int i = 3; i <= N; i++)
		arr[i] = (arr[i - 1] + arr[i - 2]) % 15746;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	fibonacci();
	cout << arr[N] % 15746;

	return 0;

}
