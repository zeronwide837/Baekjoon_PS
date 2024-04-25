#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int X, cnt, a, b;
	cin >> X;
	cnt = 1;

	while (X > cnt) { //분수 군을 1개군, 2개군 ,3개군 ... 으노 나누기
		X -= cnt; 
		cnt += 1;
	}

	if (cnt % 2 == 0) //짝수 군일때 분자가 점점 커짐 
	{
		a = X;
		b = cnt - X + 1;
	}

	else //홀수 군일때 분모가 점점 커짐
	{
		a = cnt - X + 1;
		b = X;
	}

	cout << a << "/" << b << "\n";
}