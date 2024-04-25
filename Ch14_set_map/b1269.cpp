#include <iostream>
#include <map>
using namespace std;

map<int, int> uni;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int A, B, tmp, cnt = 0;
	cin >> A >> B;

	for (int i = 0; i < A; i++)
	{
		cin >> tmp;
		uni.insert(pair<int, int>(tmp, 1));
	}

	for (int i = 0; i < B; i++)
	{
		cin >> tmp;
		if (uni.find(tmp) != uni.end()) uni[tmp]++;
		else uni.insert(pair<int, int>(tmp, 1));
	}

	for (const auto& pair : uni)
		if (pair.second == 1) cnt++;

	cout << cnt << '\n';
	return 0;
}
