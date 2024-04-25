#include <iostream>
#include <cmath>
using namespace std;

void hanoi(int N, int srt, int end)
{
	if (N == 1)
	{
		cout << srt << " " << end << '\n';
		return;
	}
	hanoi(N - 1, srt, 6 - srt - end);
	cout << srt << " " << end << '\n';
	hanoi(N - 1, 6 - srt - end, end);
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int N;
	cin >> N;
	cout << (int)pow(2, N) - 1 << '\n';
	hanoi(N, 1, 3);

}
