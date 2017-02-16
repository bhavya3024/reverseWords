#include <iostream>
#include <string>
using namespace std;
int main()
{
	int p, check,counter =0;
	string s;
	getline(cin,s);
	p = s.length() - 1;
	while (1)
	{
		if (s[p] == 32)
		{
			
			while (s[p] == 32)
			{
				cout << s[p];
				if (p < 1)
					break;
				p--;
			}
			check = p;
		}
		else
		{
			if (counter != 0)
				p = check;
			while (s[p] != 32)
			{
				if (p < 1)
					break; 
				p--;
			}
			check = p;
			if (p != 0)
			p++;
			while (s[p] != 32 && p < s.length())
			{
				cout << s[p];
				p++;
			}

		}
		if (check < 1)
			break;
		else
		{
			p = check;
		}
	}
	getchar();
	getchar();
}