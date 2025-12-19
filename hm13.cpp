#include <iostream>

int main()
{
    int score[3] = {97,99,75};
    int temp;
    
    temp = score[0];
    score[0] = score[2];
    for (int i=0;i<3;i++){
        std::cout << score[i] <<" ";
    }

    return 0;
}