#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

class cards {
public :	
	string string;
	void f () {
	}
};

cards stringToCardsTranslator (string &s);

int main ()
{
		string s = "10 2 4 J JOKER";
		cards cards = stringToCardsTranslator (s);
		int i = 0;
		cout << cards.string.size() << endl;
		while (i < cards.string.size() )
		{
			cout << (int)(cards.string[i]) << "&";
			i++;
		}
		system("pause");
		return 0;
}

cards stringToCardsTranslator (string &s)
{
//	cout << s << endl;
	cards cards;
	char c;
	int i;
	int size = s.size();
	for (i = 0; i < size; i++) 
	{
		c = s[i];
		cout << s[i] << endl;
		if (c >= '2' && c <= '9')
		{
			c -= '0';	
		}
		else if (c == '1')
		{
			c = 10;
			i++;                  //Ìø¹ý¡®10¡¯ÖÐµÄ¡®0¡¯ 
			continue;
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
			continue;
		}
		cards.string.push_back(c);
	}
	return cards;
}
