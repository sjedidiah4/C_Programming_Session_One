#include <stdio.h>
#define number 5                        /*The structure that I am going to create will contain 5 employees*/


/*I want to define the structure outside the main function*/
struct employee                         /*The structure tagline*/
{
    long int ID;                        /*Structure members*/
    char name[20];
    float rate;
};                             

/*Now we are moving to the main function*/

int main (void)
{
/*We declare an array of the 5 employees whose information we want to enter using the structure tagline*/
    int i;
    struct employee employee_records[5];

/*Now we ask the user to enter the values. Note that for the string name, I had to remove the & for it to work*/
    for (i = 0; i<number; i++)
    {
        printf("For employee %d, enter details: \n", (i+1));
        printf(" ID  |   Name   |  Hourly_rate \n");
        scanf("%ld   %s  %f", &employee_records[i].ID, employee_records[i].name, &employee_records[i].rate);
    }

    printf(" ID     |     Name   |  Hourly_rate \n");
    for (i = 0; i<number; i++)
    {
      printf("%ld     %s       %.2f\n", employee_records[i].ID, employee_records[i].name, employee_records[i].rate);  
    }
return 0;

}
