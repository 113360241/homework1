// ConsoleApplication2.23.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;

int main()
{
	int a, b, c,k;
	cin >> a >> b >> c;
	if (a < b) {
		k = a;
		a = b;
		b = k;
	}
	if (b < c) {
		k = b;
		b = c;
		c = k;
	}
	cout << "largest is " << a << endl;
	cout << "smallest is " << c << endl;
}


