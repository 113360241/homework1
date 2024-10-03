// ConsoleApplication2.31.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    cout << "number square cube";
    for (int i = 0; i <= 10; i++) {
        cout << i << " " << pow(i, 2) << " " << pow(i, 3) << endl;
    }
}

