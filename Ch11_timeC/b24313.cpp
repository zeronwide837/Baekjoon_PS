#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a1, a0, c, n0;

	cin >> a1 >> a0;
	cin >> c;
	cin >> n0;


	if (a1 * n0 + a0 <= c * n0 && a1 <= c) cout << 1 << "\n"; //a0 ������ �� ����ó�� �ʿ�
	else cout << 0 << "\n";
	return 0;
}