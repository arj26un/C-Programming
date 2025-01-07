// step - step evaluation of 3*x/y-z+k where x=2 ,y=3,z=3,k=1;
/*step by step solution
  3*2/y-z+k
  6/3-z+k
  2-3+k
  -1+1
  =0 */
# include <stdio.h>
int main(){
   int x=2,y=3,z=3,k=1;
   int a = 3*x/y-z+k;
   printf("the solution of this problem is \t %d",a);
 return 0 ;
}