#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	vector<int> vec1(N);
	vector<int> vec2(N);
	for (int i = 0; i < N; i++)
	{
		cin >> vec1[i];
		vec2[i] = vec1[i];
	}
		
	sort(vec2.begin(), vec2.end());
	vec2.erase(unique(vec2.begin(),vec2.end()), vec2.end());


	for (int i = 0; i < N; i++)
		cout << lower_bound(vec2.begin(), vec2.end(), vec1[i]) - vec2.begin() << ' ';

	return 0;
}
