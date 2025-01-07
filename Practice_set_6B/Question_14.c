// WAP to print n to 1 numbers.
// #include<stdio.h>
// int numbers(int number);
// int main(){
//     int number;
//     printf("Enter the number:");
//     scanf("%d",&number);
//     numbers(number);
//     return 0;
// }
// int numbers(int number){
//     if(number==0){
//         return 0;
//     }
    
//      numbers(number-1);
//     printf(" %d \n",number);
//     return 0;
// } 
// 
//  OR OR OR OR OR OR OR OR OR OR OR OR  OR 
#include<stdio.h>
int increasing(int x,int number);
int main(){
    int number;
    printf("Enter the number:");
    scanf("%d",&number);
    increasing(1,number);
    return 0;
}
int increasing(int x,int number){
    if(x>number){
        return 0;
    }
    printf("%d \n",x);
    increasing(x+1,number);
 return 0;
}