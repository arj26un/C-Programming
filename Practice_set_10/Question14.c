// Create a structure type 'person' with name,salary and age as its 
//attributes. Declare and initalise 2 variables for this 
//Print the name of first person and the age of second person
typedef struct person{
    char name[40];
    int salary;
    int age; 
} person;
int main(){
    person person_1={"arjun",30000,35};
    person person_2 = {"bharat",45000,34};
    printf("%s\n",person_1.name);
    printf("%d\n",person_2.age);
    return 0;
}