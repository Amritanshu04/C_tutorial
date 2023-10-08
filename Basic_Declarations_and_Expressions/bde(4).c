/*Write a C program that accepts two integers from the user and calculates the product of the two integers.
Test Data :
Input the first integer: 25
Input the second integer: 15
Expected Output:
Product of the above two integers = 375
*/


#include <stdio.h>

int main()
{
    int num1;
    int num2;

    printf("enter the first integer ");
    scanf("%d", &num1);

    printf("enter the second integer ");
    scanf("%d", &num2);



    int product =num1 *num2;
    printf("the product of first and second integer is %d",product);

    return 0;

}