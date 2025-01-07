//WAP to print NUMBER GUESSING GAME rnot a random number but number taken from coder
# include <stdio.h>
int main(){
   int number,guess_number=67,number_of_gusses=0;
  while(1){
    printf("Enter the number:");
    scanf("%d",&number);
      number_of_gusses++;
    if(number==guess_number){
       
        printf("congratulations! you enetred the correct number\n");
        break;
    }
    else if(number>guess_number){printf("You have entered the greater number\n");}
        
    
    else{
        printf("You have entered the lower number\n");
    }
      
    
  }
  printf("number of gusses is %d",number_of_gusses);
   
 return 0 ;
}
