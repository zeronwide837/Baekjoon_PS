#include <iostream>
#include <set>
#include <string>
using namespace std;

set<string> stset;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string S, tmp;
	cin >> S;

	for (int i = 0; i < S.size(); i++)
	{
		tmp = "";
		for (int j = i; j < S.size(); j++)
		{
			tmp += S[j];
			stset.insert(tmp);
		}
	}
		
	cout << stset.size() << '\n';
	return 0;
}
