#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int dats[8001] = { 0, };
vector<int> dat;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, tmp, freq = 0, max = 0, mode, modecnt = 0;
	double mean = 0;
	 
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		dat.push_back(tmp);
		mean += tmp;
		dats[tmp + 4000]++;
	}

	sort(dat.begin(),dat.end());

	int flag = 0;
	for (int i = 0; i < 8001; i++)
	{
		if (dats[i] > freq)
		{
			freq = dats[i];
			max = i - 4000;
		}
	}

	for (int i = 0; i < 8001; i++)
	{
		if (dats[i] == freq && modecnt == 0) modecnt++;
		else if (dats[i] == freq && modecnt)
		{
			flag = 1;
			mode = i - 4000;
			break;
		}
	}

	int flag2 = 0;
	if (!flag) mode = max;

	if (round(mean / N) == -0) cout << 0 << '\n';
	else cout << round(mean / N) << '\n';
	cout << dat[N / 2] << '\n';
	cout << mode << '\n';
	cout << dat[N - 1] - dat[0];

	return 0;
}
