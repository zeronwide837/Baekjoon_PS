#include <iostream>
using namespace std;
int N, M, I, J;
int arr[101] = { 0 };

//������ ����
void Swap(int *int1, int *int2)
{
	int tmp;
	tmp = *int1;
	*int1 = *int2;
	*int2 = tmp;
}

/*�ӽð� ����
void swap(int int1, int int2)
{
	int tmp = arr[int1];
	arr[int1] = arr[int2];
	arr[int2] = tmp;
}
*/

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		arr[i] = i + 1;
	}

	for (int i = 0; i < M; i++)
	{
		cin >> I >> J;
		Swap(&arr[I-1], &arr[J-1]);
		/*�ӽð����� swap ��� ��
		* Swap(I-1,J-1);
		*/
	}

	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << " ";
	}
}