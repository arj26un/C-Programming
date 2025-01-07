// WAP to print zig_zag using pre in post method
//2111211123
//321112111232111211123
#include<stdio.h>
int zigzag(int a);
int main(){
    int number;
     printf("Enter the number:");
     scanf("%d",&number);
     zigzag(number);
}
int zigzag(int a){
    if(a==0) return;
    printf("%d",a);
    zigzag(a-1);
    printf("\n %d",a);
    zigzag(a-1);
    printf("\n  %d",a);
    return;
}