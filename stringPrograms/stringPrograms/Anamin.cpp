#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	int len;
	getline(cin, s);
	len = s.size();
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (s[j] > s[j + 1])
			{
				swap(s[j], s[j + 1]);
			}
		}
	}
	cout << s;
}