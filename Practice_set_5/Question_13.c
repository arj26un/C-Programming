/*WAP to print Hollow rectangle
 * * * * * * * *
 *             *
 *             *
 * * * * * * * *
 */
    #include<stdio.h>
    int main(){
        int number,number_1;
        printf("Enter the number:");
        scanf("%d",&number);
        printf("Enter the number:");
        scanf("%d",&number_1);
        for (int i = 1; i <=number; i++)
        {
           for (int j = 1; j <= number_1; j++)
           {
              if((i==1||j==1)||(i==number||j==number_1)){
                printf("* ");
              }
              else{
                printf("  ");
              }
           }
           printf("\n");
        }
        return 0;
    }
