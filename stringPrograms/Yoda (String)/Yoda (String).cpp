#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s, subS;
	int len, pos = 0, count = 0;
	getline(cin, s);
	len = s.size();

	for (int i = 0; i < (len - (len % 2)) / 2; i++)
	{
		swap(s[i], s[(len - 1) - i]);
	}

	cout << s;

	do
	{
		subS = s.substr(pos, s.find(' ', pos) - 1);
		len = subS.size();
		if(s.find(' ', pos) != string::npos)
		{
			for (int i = 0; i < (len - (len % 2)) / 2; i++)
			{
				swap(subS[i], subS[len - i]);
			}

			s.erase(pos, s.find(' ', pos) - 1);
			s.insert(pos, subS);
			pos += s.find(' ', pos) + 1;
		}
	} while (s.find(' ', pos) != string::npos);

	cout << s;
}
