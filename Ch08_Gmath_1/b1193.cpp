#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int X, cnt, a, b;
	cin >> X;
	cnt = 1;

	while (X > cnt) { //�м� ���� 1����, 2���� ,3���� ... ���� ������
		X -= cnt; 
		cnt += 1;
	}

	if (cnt % 2 == 0) //¦�� ���϶� ���ڰ� ���� Ŀ�� 
	{
		a = X;
		b = cnt - X + 1;
	}

	else //Ȧ�� ���϶� �и� ���� Ŀ��
	{
		a = cnt - X + 1;
		b = X;
	}

	cout << a << "/" << b << "\n";
}