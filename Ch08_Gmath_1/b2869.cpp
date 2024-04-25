#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int A, B, V, cnt = 1;

	cin >> A >> B >> V;

	cnt += (V - A) / (A - B);

	if ((V - A) % (A - B) != 0) cnt += 1;

	if (A >= V) cout << 1 << "\n";
	else cout << cnt << "\n";
	return 0;
}