/* Write a C program to compute the perimeter and 
area of a rectangle with a height of 7 inches and width of 5 inches.
Expected Output:
Perimeter of the rectangle = 24 inches
Area of the rectangle = 35 square inches*/

#include <stdio.h>

int main()
{
    int height, width ;
    
    printf("enter the number1 \n");
    scanf("%d",&height);

    printf("enter the number2 \n");
    scanf("%d",&width);

    int perimeter = 2*(height + width );
    printf("perimeter of the rectangle = %d inches \n",perimeter);

    int area= height * width;
    printf("area of the rectangle = %d sq inches \n",area);

    return(0);
}