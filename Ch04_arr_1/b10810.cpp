#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M, I, J, K;
	cin >> N >> M;
	int arr[101] = { 0 };

	for (int i = 0; i < M; i++)
	{
		cin >> I >> J >> K;
		for (int j = I-1; j < J; j++)
		{
			arr[j] = K;
		}
	}

	for (int i = 0; i < N; i++) cout << arr[i] << " ";
}