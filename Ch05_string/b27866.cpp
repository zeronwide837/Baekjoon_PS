#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string S;
	int i;

	cin >> S;
	cin >> i;
	cout << S[i - 1];
	return 0;
}