// Write to functiond one to print "hello" & second to print "good bye"
#include<stdio.h>
void hello();
void goodbye();
int main(){
    hello();
    goodbye();
    hello();
    goodbye();hello();
    goodbye();hello();
    goodbye();hello();
    goodbye();
  return 0;
}
void hello(){
    printf("Hello!\n");
    

}
void goodbye(){
    printf("Goodbye!\n");
     
}