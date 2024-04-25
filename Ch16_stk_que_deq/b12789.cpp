#include <iostream>
#include <stack>
using namespace std;

stack<int> st;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, tmp, ord = 1;
	cin >> N;
	
	while (N--)
	{
		cin >> tmp;

		if (tmp == ord) ord++;
		else st.push(tmp);

		while (!st.empty() && st.top() == ord)
		{
			st.pop();
			ord++;
		}
	}

	if (st.empty()) cout << "Nice" << '\n';
	else cout << "Sad" << '\n';

	return 0;
}