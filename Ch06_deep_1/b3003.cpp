#include <iostream>
using namespace std;

int arr[6] = { 0 };
int chess[6] = { 1,1,2,2,2,8 };
int check[6] = { 0 };

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int piece;
	
	for (int i = 0; i < 6; i++)
	{
		cin >> piece;
		arr[i] = piece;
	}

	for (int i = 0; i < 6; i++)
	{
		check[i] = chess[i] - arr[i];
		cout << check[i] << " ";
	}


}