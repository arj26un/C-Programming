// WHICH TERM IS INAVID IN C

/*int a= 1; int b=a;  OUTPUT = a=1,b=1
int v=3*3;  OUTPUT = v=9
char dt = '21dec2020' OUTPUT = 0 because its invalid also chracter data type stores only one character
*/

# include <stdio.h>
int main(){
     int a= 1; int b=a;
     int v= 3*3;
     char dt ='21 dec 2020';
     printf(" %d \n %d \n %d \n %c ", a,b,v,dt);
 return 0 ;
}


