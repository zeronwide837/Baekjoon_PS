#include <iostream>
#include <set>
using namespace std;

set <string> S;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	string nm1, nm2;

	cin >> N;
	S.insert("ChongChong");

	while (N--)
	{
		cin >> nm1 >> nm2;
		if (S.count(nm1) || S.count(nm2))
		{
			S.insert(nm1);
			S.insert(nm2);
		}
	}

	cout << S.size() << '\n';
	return 0;
}
