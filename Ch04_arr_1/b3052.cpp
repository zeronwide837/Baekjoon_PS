#include <iostream>
using namespace std;

int arr[10] = { 0 };
int arr2[1000] = { 0 };

int main(void)
{
	int N, cnt;
	cnt = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> N;
		arr[i] = N % 42;
		arr2[N % 42] = 1;
	}
	for (int i = 0; i < 1000; i++)
	{
		if (arr2[i] == 1) cnt++;
	}
	cout << cnt << "\n";
}