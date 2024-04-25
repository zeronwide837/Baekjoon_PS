#include <iostream>
using namespace std;

int arr[100][100];
int brr[100][100];

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N, M;
	cin >> N >> M;

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++) cin >> arr[i][j];
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++) cin >> brr[i][j];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++) cout << arr[i][j] + brr[i][j] << " ";
		cout << "\n";
	}
		
	return 0;
}