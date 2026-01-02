#include <iostream>
using namespace std;

int main()
{
   int score[6] = {92,85,45,33,76,34};
   int temp;
   
   for (int i=1; i<6; i++) {
       for (int j=0; j < 6-i ;j++){
           if (score[j] > score[j+1]){
               temp = score[j];
               score[j] = score[j+1];
               score[j+1] = temp;
           }
       }
           
   }

    return 0;
}