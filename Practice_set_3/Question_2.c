/*Write a program to determine whether a student has passed or failed . 
To pass, a student a total of 40% and at least 33 in each subject.
 Assume there are three subjects ans take the names as input from the user.
*/
#include<stdio.h>
 int main(){\
   int subject_1,subject_2,subject_3;
    float percentage;
   printf("Enter the marks of subjcet_1 =" );
   scanf("%d",&subject_1);  
   printf("Enter the marks of subjcet_2 =" );
   scanf("%d",&subject_2);     
    printf("Enter the marks of subjcet_3 =" );
    scanf("%d",&subject_3);
    printf("TOTAL MARKS OF 3 SUBJECTS IS = %d \n",subject_1+subject_2+subject_3);
    percentage = (subject_1+subject_2+subject_3)/3;
    printf("Percentage of your marks is %f \n",percentage);
    if ((subject_1<33||subject_2<33||subject_3<33))
    {  
        printf("You are fail because you score less marks");

    }
    else if ( percentage < 40)
    {
        printf("You are fail because you get less than 40 percent marks ");
    }
    else{
        printf("congratulations! You passed");

    }
    

 }  