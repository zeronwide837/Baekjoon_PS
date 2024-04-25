#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	float total, result, sc;
	total = 0;
	result = 0;
	int raidx;
	raidx = -1;
	string sbj, ra;

	vector<string> rate = { "A+","A0","B+","B0","C+","C0","D+","D0","F" };
	vector<float> score = { 4.5, 4.0, 3.5, 3.0, 2.5, 2.0, 1.5, 1.0, 0 };

	for (int i = 0; i < 20; i++)
	{
		cin >> sbj >> sc >> ra;
		if (ra != "P")
		{
			for (int j = 0; j < rate.size(); j++) {
				if (rate[j] == ra) raidx = j;
			}
			total += sc;
			result += sc * score[raidx];
		}
	}

	cout.precision(6);
	cout << fixed << result / total << "\n";
}