//SOLVED
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	int pos = 0;
	getline(cin, s);

	s.erase(pos, 2);
	do
	{

			s.erase(s.find('-', pos), 3);

	} while (s.find('-', pos) != string::npos);

	do
	{
		if (s.find(' ', pos) != string::npos)
		{
			s.erase(s.find(' ', pos) + 1, 2);
			pos += s.find(' ', pos) + 1;
		}
	} while (s.find(' ', pos) != string::npos);

	cout << s;
}

//pipri-pivet pio-pilim-pipi-piec