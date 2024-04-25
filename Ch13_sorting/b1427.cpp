#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int arr[10];

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string N;
	cin >> N;

	for (int i = 0; i < N.length(); i++) arr[i] = N[i] - '0';

	sort(arr, arr + N.length());

	for (int i = N.length()-1; i >= 0; i--) cout << arr[i];
	return 0;
}