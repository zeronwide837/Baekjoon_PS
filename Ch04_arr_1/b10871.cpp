#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N, X;
	cin >> N >> X;
	int* A = new int[N];
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}

	for (int i = 0; i < N; i++)
	{
		if(A[i] < X) cout << A[i] << " ";
	}

	return 0;
}