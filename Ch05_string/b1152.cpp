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

	if (S.length() == 1 && S[0] == ' ') //�ܾ ���� ���
	{
		cout << 0;
		return 0;
	}

	for (int i = 1; i < S.length()-1; i++) if (S[i] == ' ') cnt++; //�������� ���ؾ� ��, ���ڿ��� �������� �����ϰų� ���� �� �־� 1�� ����, ����-1�� ����

	cout << cnt << "\n";
}