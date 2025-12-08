#include <iostream>
using namespace std;
int main()
{
    int password = 7;
    int enterkey;
    
    
    cout << "輸入密碼數字(1-10):";
    cin >> enterkey;
    while (password != enterkey) {
        cout << "密碼錯誤再次輸入(1-10):";
        cin >> enterkey;
    }
    cout << "密碼正確遊戲結束" << endl;
    return 0;
}