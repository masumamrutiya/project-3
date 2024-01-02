#include <stdio.h>

int main()
    //   QUESTION-1
{
    char AtoZ='a';
    
    do {
        printf("%c\n",AtoZ);
        AtoZ+=4;
    }
    
    while(AtoZ<='z');


    // QUESTION-2

     int num=70;
   int k =10;
   int sum;
   for(int i=1; i<num; i++){
       if(i%k==0){
           sum+=i;
       }
   }
   printf("%d\n",sum);
    
    return 0;
}