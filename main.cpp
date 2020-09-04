#include <iostream>
using namespace std;

int max(int a, int b);
int toHex(int n);

int main ()
{
		int a, b;
		cin >> a >> b;
		toHex(max(a, b));
		system("pause");
		return 0;
}
