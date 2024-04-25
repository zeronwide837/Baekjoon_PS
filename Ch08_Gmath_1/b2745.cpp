#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string N;
	int B;
	cin >> N >> B;

	int nsum = 0;
	for (int i = 0; i < N.length(); i++)
	{
		if (N[i] >= '0' && N[i] <= '9') nsum = nsum * B + (N[i] - '0');
		else nsum = nsum * B + (N[i] - 'A' + 10);
	}

	cout << nsum << "\n";
	return 0;
}