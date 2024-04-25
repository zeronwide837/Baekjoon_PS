#include <iostream>
using namespace std;

int arr[26] = { 0 };

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	for (int i = 0; i < 26; i++) arr[i] = -1;

	string S;
	cin >> S;
	for (int i = 0; i < S.length(); i++)
		for (int j = 97; j <= 122; j++) if ((int)S[i] == j && arr[j - 97] == -1) arr[j - 97] = i;

	for (int i = 0; i < 26; i++) cout << arr[i] << " ";
	return 0;
}