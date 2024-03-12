//SOLVED
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	string s, result;
	cin >> n >> s;
	result = s;
	for(int i = 1; i <= n - 1; i++)
	{
		cin >> s;
		if(s > result)
		{
			result = s;
		}
	}
	cout << result;
}