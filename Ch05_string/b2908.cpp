#include <iostream>
#include <string>
using namespace std;

string A, B;
void reverse()
{
	char tmp1 = A[0];
	A[0] = A[2];
	A[2] = tmp1;
	
	char tmp2 = B[0];
	B[0] = B[2];
	B[2] = tmp2;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> A >> B;
	reverse();

	int Aint = stoi(A);
	int Bint = stoi(B);

	if (Aint > Bint) cout << Aint;
	else cout << Bint;
	return 0;
}