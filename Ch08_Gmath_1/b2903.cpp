#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N,ans=1;
	cin >> N;
	ans = 1 + pow(2, N);
	cout << ans*ans;
}