#include <iostream>
#include <stack>

using namespace std;

stack<int> st;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	
	int N, cmd, tmp;
	cin >> N;
	

	for (int i = 0; i < N; i++)
	{
		cin >> cmd;
		switch (cmd)
		{
		case 1:
			cin >> tmp;
			st.push(tmp);
			break;

		case 2:
			if (!st.empty())
			{
				cout << st.top() << '\n';
				st.pop();
			}
			else cout << -1 << '\n';
			break;

		case 3:
			cout << st.size() << '\n';
			break;

		case 4:
			if (!st.empty()) cout << 0 << '\n';
			else cout << 1 << '\n';
			break;

		case 5:
			if (!st.empty()) cout << st.top() << '\n';
			else cout << -1 << '\n';
			break;
		}
	}
	return 0;
}
