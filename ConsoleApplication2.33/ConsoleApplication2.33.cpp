// ConsoleApplication2.33.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    double a[5];
    cout << "輸入 一整天的總里程數 汽油一公升/加侖多少錢 平均一公升/加侖能行駛多少公里 一天的停車費 一天的通行費(過路費)\n";
    for (int i = 0; i < 5; i++)
        cin >> a[i];
    double cost;
    cost = a[0] / a[2] * a[1] + a[3] + a[4];
    cout << "花費" << cost << "元" << endl;

}
