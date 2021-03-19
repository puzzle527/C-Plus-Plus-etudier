#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string A = "abcd:efghi";

	cout << A.substr(5) << endl;

	string B = "abcdef";

	for (int i = 0; i < B.size() / 2; i++)
	{
		char temp = B[i];
		B[i] = B[B.size() - i - 1];
		B[B.size() - i - 1] = temp;
	}
	cout << B << endl;

	string C = "acaaadbbde";
	//4a2b1c1d1e
	int arr[26] = { 0, };
	for (int i = 0; i < C.size(); i++)
	{
		arr[(C[i] - 97)]++;
	}
	C.clear();
	for (int i = 0; i < 26; i++)
	{
		if (arr[i] != 0)
		{
			C.push_back(arr[i] + 48);
			C.push_back(static_cast<char>(97 + i));
		}
	}
	/*for (int i = 0; i < 26; i++)
	{
		if (arr[i] != 0)
		{
			C += to_string(arr[i]);
			C += static_cast<char>(97 + i);
		}
	}*/
	cout << C << endl;
	/*for (int i = 0; i < 26; i++)
	{
		if (arr[i] != 0)
		{
			cout << arr[i] << static_cast<char>(97 + i);
		}
	}
	cout << endl;*/

	string D = "abcefabcghabcij";
	int cnt = 0;
	//abcefabchij
	//cout << D << endl;
	for (int i = 0; i < D.size() - 2; i++)
	{
		if (D[i] == 'a' && D[i + 1] == 'b' && D[i + 2] == 'c')
			cnt++;
	}
	cout << cnt << endl;
	string::iterator iter;
	iter = D.begin() + D.rfind("abc");

	for (int i = 0; i < 3; i++)
	{
		D.erase(iter);
	}
	cout << D << endl;

	return 0;
}
