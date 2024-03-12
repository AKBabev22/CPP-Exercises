#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n, pos = 0, result = 0;
	string word_pt[50], s, subS, word, pt;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		getline(cin, word_pt[i]);
	}
	getline(cin, s, '.');

	for (int i = 0; i < n; i++)
	{
		subS = s.substr(pos, s.find(' ', pos) - 1);
		pos += s.find(' ', pos) + 1;
		word = s.substr(0, word_pt[i].find(' ') - 1);
		pt = s.substr(word_pt[i].find(' ') + 1);
		if (subS == word)
		{
			result += stoi(pt,nullptr);
			word_pt[i].erase(word_pt[i].find(' ') + 1);
			word_pt[i].insert(word_pt[i].find(' ') + 1, 1, '0');
		}
	}
	cout << result;
}