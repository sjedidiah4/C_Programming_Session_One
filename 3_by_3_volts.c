#include <stdio.h>
#define total = 9
#define row 3 
#define column 3                      /*I am using the clever way of defining that as a macros so that it can be easily updated whenever one wants to change the size of the vector*/

int main (void)
{
/*Declaration of the variables that I am going to use in this case*/
    int i,j; 
    float volts[row][column];

/*Now that I have already declared the variables, I am going to ask the user to enter the variables. In this case, sice it's a 3 by 3 vector, I am going to use the nested for loop function*/
    printf("Enter the vector values below in the exact order that is is given: \n");
    for (i = 0; i< row; i++)
    {
        for (j = 0; j < column; j++)
        {
            scanf("%f", &volts[i][j]);
        }
    }

/*Values saved, now we can print the resulting output*/
printf("Enter the vector values below in the exact order that is is given: \n");
    for (i = 0; i< row; i++)                    /*How does the nested loop work? It will first check when the row is 0 then print out all the columns from 0 to three. Then it will move to when row is 1 and print out all the column values et al*/
    {
        for (j = 0; j < column; j++)
        {
            printf("%.2f,", volts[i][j]);
        }
        printf ("\n");                          /*The idea is to print out a new line after each row hence the location of the print \n */
    }

}