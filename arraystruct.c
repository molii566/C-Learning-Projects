#include <stdio.h>
#include <string.h>

   typedef struct 
    {
        char name [12];
        float gpa;
        

    } student;
    

int main (){

     student student2={"is",34.0};
     student student1={"bro",33.0};
     student student3={"code",35.0};
     student student4={"why",36.0};
      
      student students[]={student1,student2,student3,student4};

     for (int i =0; i < sizeof(students)/sizeof(students[0]);i++){
        printf("%-12s \t",students[i].name);
         printf("%.2f \n",students[i].gpa);
     }
      
    return 0;

}