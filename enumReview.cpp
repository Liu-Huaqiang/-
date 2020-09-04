//感觉需要复习枚举类

#include <iostream>
using namespace std;

enum card {
		C0, //这两个是凑数的 
		C1, //这两个是凑数的   有了这两个凑数的，可以简单地把序号与真实的牌对应起来。 
		C2,
		C3,
		C4,
		C5,
		C6,
		C7,
		C8,
		C9,
		C10,
		J,
		Q,
		K,
		A,
		JOK,  //小鬼三个字符比大鬼五个字符短，因此它小 
		JOKER
};


int main () 
{
		cout << J;
		system("pause");
		return 0;
} 
