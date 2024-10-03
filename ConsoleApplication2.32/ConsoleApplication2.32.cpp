// ConsoleApplication2.32.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    double w, h,b;
    cout << "input weight and height"<<endl;
    cin >> w >> h;
    b = w / h / h*10000;
    cout << "BMI=" << b << endl<<"It's ";
    if (b < 18.5)
        cout << "underweight";
    else if (b >= 18.5 && b < 25)
        cout << "normal";
    else if (b >= 25 && b < 30)
        cout << "overweight";
    else if (b >= 30)
        cout << "obese";
    cout << ".\n";
}
