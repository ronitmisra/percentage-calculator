#include <stdio.h>

int main()
{
    float  Physics, Chemistry, Math,CS,English; 
    float sum, avg;

    /* Input marks of all five subjects */
    printf("Enter marks of five subjects: \n");
    scanf("%f%f%f%f%f", &English, &Physics, &Chemistry, &Math, &CS);

    /* Calculate sum, average */
    sum = English +Physics +Chemistry+Math+CS;
    avg = sum/ 5.0;
    /* Print all results */
    printf("Total marks = %.2f\n",sum);
    printf("Average marks = %.2f\n",avg);
    return 0;
}