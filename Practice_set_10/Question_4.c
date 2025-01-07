// WAP to illustrate the use of arrow operator in c
#include<stdio.h>

typedef struct pointer{
    int a;
    int b;

}pointer;
int main(){
    pointer v1;
    pointer* ptr = &v1;
        ptr->a = 34;
    printf("%d",ptr->a);
    return 0;
}