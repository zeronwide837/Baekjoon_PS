#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int cnt = 1;
	string S;
	
	getline(cin, S);

	if (S.length() == 1 && S[0] == ' ') //단어가 없는 경우
	{
		cout << 0;
		return 0;
	}

	for (int i = 1; i < S.length()-1; i++) if (S[i] == ' ') cnt++; //구간설정 잘해야 함, 문자열이 공백으로 시작하거나 끝날 수 있어 1로 시작, 길이-1로 종료

	cout << cnt << "\n";
}