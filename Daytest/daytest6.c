
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s, t;
	while (cin >> s >> t)
	{
		size_t len = t.size();
		size_t i = 0;
		size_t j = 0;
		int flag = 0;
        if(s.size()==0)
        {
            cout<<"false"<<endl;
            continue;
        }
		while (j < len)
		{
			if (s[i] == t[i])
			{
				i++;
				j++;
			}
			else if (s[i] == '?')
			{
				i++;
				j++;
			}
			else if (s[i] == '*'&& i + 1 < s.size())
			{
				char next = s[i+1];
				i++;
                if(next=='?')
                {
                    j++;
                }
                else
                {
                    while (j<len && t[j] != next)
                        j++;
                    i++;
                    j++;
                }
				
			}
			else if (s[i] == '*'&& i + 1 == s.size())
			{
				flag = 1;
				break;
			}
			else
				break;
		}
        
		if (j == len || flag == 1)
			cout << "true" << endl;
		else
			cout << "false" << endl;
	}
	return 0;
}