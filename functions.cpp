#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

vector<char> stringToCardsTranslator (string s);

int main ()
{
		vector <char> cards = stringToCardsTranslator ("10 2 4 J JOKER");
		int i = 0;
		while (i < cards.size() )
		{
			cout << (int)(cards[i]) << " ";
			i++;
		}
		system("pause");
		return 0;
}

vector<char> stringToCardsTranslator (string s)
{
//	cout << s << endl;
	vector<char> cards;
	int i, size;
	char a[2];
	char c;
	string sb;
	size = s.size();
	for (i = 0; i < size; i++) 
	{
		sb = s.substr(i, 1);
		cout << sb << endl;
		strcpy(a, sb.c_str());
		c = a[0];
		cout << c << endl;
		if (c >= '2' && c <= '9')
		{
			c -= '0';	
		}
		else if (c == '1')
		{
			c = 10;
			i++;                  //Ìø¹ý¡®10¡¯ÖÐµÄ¡®0¡¯ 
		}
		else if (c == 'J')
		{
			if (s.substr(i, 5).compare("JOKER") == 0)
			{
				c = 16;
			}
			else if (s.substr(i, 3).compare("JOK") == 0)
			{
				c = 15;
			}
			else
			{
				c = 11;
			}
		}
		else if (c == 'Q')
		{
			c = 12;
		}
		else if (c == 'K')
		{
			c = 13;
		}
		else if (c == 'A')
		{
			c = 14;
		}
		else if (c = ' ')
		{
			i++;
		}
		cards.push_back(c);
	}
	return cards;
}
