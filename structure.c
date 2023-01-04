#include<stdio.h>
#include<conio.h>

struct employee
{
    int id_number;
    char name_of_employee[20];
    char designation[20];
    int salary;

};
 
void main()
{

   struct employee emp1;
    printf("ENTER THE ID NUMBER : \n");
    scanf("%d",&emp1.id_number);

    printf("ENTER THE name of empolyee : \n");
    scanf("%s",emp1.name_of_employee);

    printf("ENTER THE designation : \n");
    scanf("%s",emp1.designation);

    printf("ENTER THE salary : \n");
    scanf("%d",&emp1.salary);

    printf("\nDITEALS OF EMPLOYEE'S \n");

    printf("\nempolyee id number : %d",emp1.id_number);
    printf("\nempolyee name : %s",emp1.name_of_employee);
    printf("\nempolyee designation : %s",emp1.designation);
    printf("\nempolyee salary : %d",emp1.salary);

}
