// Predict ther output
// 1st part
#include<stdio.h>
int main(){
    int num[26],temp;
    num[0]=100;
    num[25]=200;
    temp = num[25];
    num[25]=num[0];
      num[0] = temp;
    printf("\n %d  %d ",num[0],num[25]);
    printf("\n\n");
    int sub[50],i;
    for ( i = 0; i <=48; i++);
    {
        sub[i]=i;;
        printf("\n %d",sub[i]);
    }
      return 0;
}