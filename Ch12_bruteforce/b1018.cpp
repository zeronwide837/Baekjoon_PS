#include <iostream>
using namespace std;

char tiles[50][50];
int nums[1000000];

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M, min, idx = 0;

	cin >> N >> M;

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> tiles[i][j];

	for (int i = 0; i < N-7; i++)
		for (int j = 0; j < M - 7; j++)
		{
			int idx1 = 0, idx2 = 0;
			//idx1 : (1,1)타일이 W로 시작할 때 바뀌는 타일 개수
			//idx2 : (1,1)타일이 B로 시작할 때 바뀌는 타일 개수
			for(int k = i; k < i + 8; k++) //k : 현재 타일 행
				for (int l = j; l < j + 8; l++) //l : 현재 타일 열
				{
					if ((k + l) % 2 == 0)
					{
						if (tiles[k][l] == 'B') idx1++;
						else idx2++;
					}
					else
					{
						if (tiles[k][l] == 'W') idx1++;
						else idx2++;
					}
				}
			if (idx1 > idx2)
			{
				nums[idx] = idx2;
				idx++;
			}
			else
			{
				nums[idx] = idx1;
				idx++;
			}
		}

	min = nums[0];
	for (int i =1; i < idx; i++)
		if (min > nums[i]) min = nums[i];

	cout << min << "\n";
	return 0;
}
