#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
	string s;
	int len;
	getline(cin, s);
	len = s.size();

	do {
		s.erase(s.find(' ', 0), 1);
	} while (s.find(' ', 0) != string::npos);

	for (size_t i = 0; i < s.size(); i++)
	{
		s[i] = toupper(s[i]);
	}

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

	cout << s << endl;
}