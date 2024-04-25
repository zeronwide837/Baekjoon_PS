#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	

	while (1)
	{
		string tmp;
		stack<char> st;
		bool chk = false;

		getline(cin, tmp);
		if (tmp == ".") break;

		for (int i = 0; i < tmp.length(); i++)
		{
			if (tmp[i] == '(' || tmp[i] == '[') st.push(tmp[i]);
			else if (tmp[i] == ')')
			{
				if (!st.empty() && st.top() == '(') st.pop();
				else
				{
					chk = true;
					break;
				}
			}
			else if (tmp[i] == ']')
			{
				if (!st.empty() && st.top() == '[') st.pop();
				else
				{
					chk = true;
					break;
				}
			}
		}

		if (chk == false && st.empty()) cout << "yes" << '\n';
		else
		{
			cout << "no" << '\n';
			chk = false;
		}

	}
	return 0;

	
}