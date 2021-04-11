#include <stdio.h>
#define max_number 8                    /*A clever way to declare the number of items we are going to include in our array. Notice that this is not a variable but a macros. Arrays cannot have variable arguments but can accept the macros*/

int main (void)
{
/*Declaration of variables and their corresponding datatypes. Notice that the average has been declared as a float because once calculated, it might contain decimal figures*/
    int sum, amps[max_number];
    int i = 0;
    float average;


/*In this section, we want to ask the user to enter the data into the amps array. We use the for loop*/
    printf("Enter the eight integer numbers here: \n");
    while (i <max_number)
    {
        scanf("%d", &amps[i]);
    }
    fflush(stdin);


/*Now that we have gotten the user input, we want to print the resulting input for them to see what they entered*/
    printf ("The values entered are as follows: \n index   integer value \n  ____    _________\n");
    while (i <max_number)
    {
        printf("    %d    |   %d \n", (i+1), amps[i]);
    }

/*The next step is for us to calculate the average. We begin but obtaining the sum of all these values. Once again, we use the for loop. We have to initialize the sum to 0 then add upon it*/
    sum = 0;
    while (i <max_number)
    {
        sum = sum +amps[i];
    };
    average = sum / max_number;

printf("The total of the numbers entered is %d and their average is %.2f", sum, average);
return 0;

};