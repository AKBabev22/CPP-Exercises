#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	int len, pos = 0, a = 0;
	getline(cin, s);
	len = s.size();

	do {
		if (s.find('w', pos) != string::npos)
		{
			a++;
			pos = s.find('w', pos) + 1;
		}
	} while (s.find('w', pos) != string::npos);

	pos = 0;

	do {
		if (s.find('o', pos) != string::npos)
		{
			a++;
			pos = s.find('o', pos) + 1;
		}
	} while (s.find('o', pos) != string::npos);

	cout << a << endl;
}