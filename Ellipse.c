#include <stdio.h>

int main (void)
{
/*The definition of variables to be used in this case.*/
    float area, major_axis, minor_axis;


/*Prompting the user to enter the parameters. Notice that the scanf function has to go with the & to locate the place where the user data is going to be stored*/
    printf("Enter the length of the major and the minor axis below:\n");
    scanf("%f %f", & major_axis, &minor_axis);


/*Calculation of the ellipse's area given the user input*/
    area = 3.1416*major_axis*minor_axis;


/*Printing out the resulting output. Note that the .2 is included to specify up to how many decimal places the program must print the output*/
    printf("The area of the ellipse given that the major axis is %.2f and minor axis is %.2f is %.4f", major_axis, minor_axis, area);

return 0;

}