#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, sum;
	string num;

	cin >> N;
	cin >> num;
	sum = 0;

	for (int i = 0; i < N; i++)
	{
		sum += num[i] - '0';
	}
	
	cout << sum << "\n";
	return 0;

}