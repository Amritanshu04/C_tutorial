#include <stdio.h>

int main()
{
    int num;
    printf("enter the number ");
    scanf("%d",&num);

    switch(num)
    {
        case 1 :
        printf("you have entered 1");
        break;

        case 2 :
        printf("you have entered 2");
        break;

        default :
        printf("wrong choice ");
        break;

        return 0;
    }
}