// WAP to check whether a character is lower-case or upper case

# include <stdio.h>
 int main(){
     char character;
  printf("Enter the character:");
  scanf("%c",&character);
  
 if (character>= 65 && character<=90){
    printf("%c character is an Uppercase",character);

  }
    else if (character>= 97&& character<= 122)
  
  {
    printf(" %c character is  a lower case", character );
  }
  
  else{
    printf(" %c not a valid character", character);
  }
         

 return 0 ;
}
