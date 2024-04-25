#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<string> chro = { "c=","c-","dz=","d-","lj","nj","s=","z=" };
	int idx = 0;
	string word;

	cin >> word;

	for (int i = 0; i < 8; i++)
	{
		while (true)
		{
			idx = word.find(chro[i]);
			if (idx == string::npos) break;
			word.replace(idx, chro[i].length(), "$");
		}
	}
	cout << word.length() << "\n";
}