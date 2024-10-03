// ConsoleApplication2.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;

int main()
{
    int a[9][9];
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (i == 0 || i == 8)
                cout << "*";
            else {
                if (j == 0 || j == 8)
                    cout << "*";
                else
                    cout << " ";
            }
        }
        cout << "       ";


        for (int j = 0; j < 9; j++) {
            if ((i == 0 || i == 8)) {
                cout << "   ***   ";
                break;
            }
            else if ((i == 1 || i == 7)) {
                cout << " *     * ";
                break;
            }
            else {
                if ((j == 0 || j == 8))
                    cout << "*";
                else
                    cout << " ";
            }
        }
        cout << "       ";

        for (int j = 0; j < 9; j++) {
            if (i >= 0 && i <= 2) {
                if (j <= 4 + i && j >= 4 - i )
                    cout << "*";
                else
                    cout << " ";
            }
            else
                if (j == 4)
                    cout << "*";
                else
                    cout << " ";
        }
        cout << "       ";

        for (int j = 0; j < 9; j++) {
            if (i < 5) {
                if (j == 4 + i || j == 4 - i) {
                    cout << "*";
                }
                else
                    cout << " ";
            }
            else
                if (j ==  12-i || j ==  i-4) {
                    cout << "*";
                }
                else
                    cout << " ";
        }



        cout << endl;
    }
}
