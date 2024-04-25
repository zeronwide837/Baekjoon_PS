#include <iostream>
using namespace std;

int main(void)
{
	int A, B, C;
	cin >> A >> B >> C;
	if (A != B && A != C && B != C)
	{
		int max;
		if (A > B && A > C) max = A;
		else if (B > C) max = B;
		else max = C;
		cout << max * 100 << endl;
	}
	else
	{
		if (A == B && B == C) cout << 10000 + A * 1000 << endl;
		else if (A == B || A == C) cout << 1000 + A * 100 << endl;
		else cout << 1000 + B * 100 << endl;
	}
	return 0;
} //max 함수 쓰려면 algorithm 라이브러리 불러와야함