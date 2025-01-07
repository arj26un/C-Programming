// WAP to find area and perimeter of the rectangle and tell whcih one is bigger
# include <stdio.h>
int main(){
 int length,breadth, area, perimeter;
 printf("Enter length of rectangle:");
 scanf("%d",&length);
 printf("Enter breadth of rectangle:");
 scanf("%d",&breadth);
  area = length*breadth;
  perimeter = 2*(length+breadth);
  printf("the area of the rectangle: %d\n",area);
  printf("the perimeter of the rectangle: %d\n",perimeter);
  if(area>perimeter){
    printf("area is greater");
  }
  else{
    printf("perimeter is greater");
  }


 return 0 ;
}