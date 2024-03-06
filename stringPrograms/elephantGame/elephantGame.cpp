#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n, pos = 0, result = 0;
	bool check = false;
	string word_pt[50], s, word, pt, subS, used[50];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		getline(cin, word_pt[i]);
	}
	getline(cin, s, '.');

	do {
		if (s.find(' ', pos) != string::npos)
		{
			subS = s.substr(pos, s.find(' ', pos) - 1);
			for (int i = 0; i < n; i++)
			{
				word = word_pt[i].substr(0, word_pt[i].find(' ') - 1);
				pt = word_pt[i].substr(word_pt[i].find(' ') + 1);
				if (subS == word)
				{
					for (int j = 0; j < n; j++)
					{
						if (word == used[j])
						{
							check = true;
							break;
						}
					}
						if (check == false)
						{
							result = result + stoi(pt);
							for (int f = 0; f < n; f++)
							{

								if (used[f] == "")
								{
									used[f] = word;
									check = false;
									break;
								}
							}
						}
				}
			}
			pos += s.find(' ', pos) + 1;
		}
	} while (s.find(' ', pos) != string::npos);

	cout << result;
}