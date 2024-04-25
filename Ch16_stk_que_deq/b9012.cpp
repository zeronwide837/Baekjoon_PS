#include <iostream>
#include <stack>

using namespace std;
stack<char> st;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T,chk = 0;
	string tmp;

	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> tmp;
		for (int i = 0; i < tmp.length(); i++)
		{
			if (tmp[i] == '(') st.push('(');
			else if (tmp[i] == ')')
			{
				if (!st.empty()) st.pop();
				else
				{
					cout << "NO" << '\n';
					chk++;
					break;
				}
			}
		}
		if (st.empty() && chk == 0) cout << "YES" << '\n';
		else if (chk == 0)
		{
			cout << "NO" << '\n';
			while (!st.empty()) st.pop();
		}
		else
		{
			chk = 0;
			continue;
		}
	}
	return 0;

}
