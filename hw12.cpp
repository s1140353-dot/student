#include <iostream>
using namespace std;

int main()
{
    int subject = 5;
    int grade[5] = {95,10,30,45,60};
    int sum =0;
    for (int i=0; i<5; i++) {
        sum = sum + grade[i];
    }
    int average = sum/subject;
    cout << "段考平均為:" <<  average;
    return 0;
}