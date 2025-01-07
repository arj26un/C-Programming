//WAP of finding the area of circle and cylinder
# include <stdio.h>

int main(){
     int radius,height;
     printf("The radius is =");
     scanf("%d",& radius); 
     printf("The height is =");
     scanf("%d",& height);
     float area = 3.14*radius* radius*height;
     printf("the area of circle with radius %d is %f \n ",radius,3.14*radius*radius);  
     printf("the area of cylinder with radius %d and cylinder %d is %f",radius,height, area );       
 return 0 ;
}