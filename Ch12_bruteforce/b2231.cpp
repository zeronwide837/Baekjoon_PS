#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, min, tmp, tsum = 0;

	cin >> N;

	for (int i = 0; i < N; i++) //생성자가 어떤 자연수보다 클 수는 없음
	{
		string gene = to_string(i);
		for (int j = 0; j < gene.length(); j++)
		{
			tmp = gene[j] - '0';
			tsum += tmp;
		}
		if (tsum + i == N)
		{
			min = i;
			cout << min << "\n";
			return 0;
		}
		else tsum = 0;
	}
	cout << 0 << "\n";
	return 0;

}
