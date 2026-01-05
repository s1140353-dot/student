#include <iostream>
using namespace std;

int main()
{
    int code[8] = {92,85,88,77,86,55,68,45};
    int target = 68;
    int found = -1;
    
    for(int i=0; i<8; i++){
        if(code[i]== target){
            found = i;
            cout << "找到目標" << target << "位於陣列引索:" << i;
            break;
        }
    }
    if(found == -1){
        cout << "找不到目標";
    }
     return 0;
}