#include <iostream>
using namespace std;
char arr[5][15];
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	for (int i = 0; i < 5; i++) cin >> arr[i];

	for (int i = 0; i < 15; i++)
		for (int j = 0; j < 5; j++) 
			if(arr[j][i] != '\0') cout << arr[j][i]; //조건 추가 필요
}