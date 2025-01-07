/*WAP to convert force of attraction on a body of mass 'm'
   extended by earth using function (g=9.8m/s).
*/
#include <stdio.h>
float function(int mass);
int main()
{
    int mass;
    printf("Enter the number:");
    scanf("%d",& mass);
    float force = function(mass);
 printf("%d x 9.8 m/s = %fN",mass,force);
    return 0;
}
float function(int mass){
    float gravity = 9.8;
    float force = mass*gravity;
    return force;
}