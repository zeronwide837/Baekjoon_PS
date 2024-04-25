#include <iostream>
using namespace std;

string reverse(string word)
{
	for (int i = 0; i < word.length() / 2; i++)
	{
		char tmp = word[i];
		word[i] = word[word.length() - 1 - i];
		word[word.length() - 1 - i] = tmp;
	}
	return word;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, B, tmp;
	cin >> N >> B;

	string ans;
	while ( N != 0)
	{
		tmp = N % B;
		N = N / B;
		if (tmp >= 0 && tmp <= 9) ans += tmp + '0';
		else ans += tmp - 10 + 'A';
	}

	
	ans = reverse(ans);
	cout << ans << "\n";
	return 0;

}