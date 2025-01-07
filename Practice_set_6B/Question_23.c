//Print the fibonnaci series of first 'n' numbers
#include<stdio.h>
int series(int n );
int main(){
    int number;
      printf("Enter the number:");
    scanf("%d",&number);
    for (int i = 0; i <=number; i++)
    {
        int result = series(i);
        printf("F(%d) =  %d\n",i,result);
    }
    return 0;
    
}
int series(int n ){
    if(n==0||n==1){
        return n;
    }
    int result = series(n-1)+series(n-2);
    return result;
}