#include <iostream>
using namespace std;

int arr[101] = { 0 };

void reverse(int idx1, int idx2)
{
	for (int i = 0; i < (idx2 - idx1 + 1) / 2; i++)
	{
		int tmp = arr[idx1 + i];
		arr[idx1 + i] = arr[idx2 - i];
		arr[idx2 - i] = tmp;
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N, M, I, J;

	cin >> N >> M;

	for (int i = 0; i <= N; i++)
	{
		arr[i] = i;
	}

	for (int i = 0; i < M; i++)
	{
		cin >> I >> J;
		reverse(I, J);
	}

	for (int i = 1; i <= N; i++)
	{
		cout << arr[i] << " ";
	}

}