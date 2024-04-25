#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int T, R;
	string S;

	cin >> T;
	
	for (int i = 0; i < T; i++)
	{
		cin >> R >> S;
		for (int j = 0; j < S.length(); j++)
			for (int k = 0; k < R; k++) cout << S[j];
		cout << "\n"; //이거 입력 안해서 틀림
	}
	

	return 0;

}