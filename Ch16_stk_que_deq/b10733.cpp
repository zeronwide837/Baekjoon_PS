#include <iostream>
#include <stack>
using namespace std;
stack<int> st;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int K, tmp, sum = 0;
	cin >> K;

	for (int i = 0; i < K; i++)
	{
		cin >> tmp;
		if (tmp != 0) st.push(tmp);
		else st.pop();
	}

	while (!st.empty())
	{
		sum += st.top();
		st.pop();
	}

	cout << sum << '\n';
	return 0;
}
