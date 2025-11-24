#include <iostream>

int main()
{
    std::cout <<"請輸入年齡";
    int age;
    std::cin >> age;
    if (age >= 18){
        std::cout << "你可以看pxxxxxhud網站";
    }
    if (age < 18 ){
        std::cout << "你還是好好讀書吧";
    }
return 0;
}