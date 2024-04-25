#include <iostream>
#include <vector>
using namespace std;

int lattice[9][9], L;
vector<pair<int, int>> blank;

bool chk = false;

bool sudoku(int x, int y, int num)
{
	for (int i = 0; i < 9; i++)
	{
		if (lattice[x][i] == num) return false;
		if (lattice[i][y] == num) return false;
	}

	for (int i = x / 3 * 3; i < x / 3 * 3 + 3; i++)
		for (int j = y / 3 * 3; j < y / 3 * 3 + 3; j++)
			if (lattice[i][j] == num) return false;

	return true;
}

void dfs(int n)
{
	if (chk == true) return;
	if (n == L)
	{
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
				cout << lattice[i][j] << ' ';
			cout << '\n';
		}
		chk = true;
	}
	else
	{
		int nx = blank[n].first;
		int ny = blank[n].second;
		for (int i = 1; i <= 9; i++)
		{
			if (sudoku(nx, ny, i))
			{
				lattice[nx][ny] = i;
				dfs(n + 1);
				lattice[nx][ny] = 0;
			}
		}
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
		{
			cin >> lattice[i][j];
			if (lattice[i][j] == 0) blank.push_back({ i,j });
		}
	L = blank.size();
	dfs(0);
	return 0;
}
