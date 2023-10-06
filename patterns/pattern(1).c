#include<stdio.h>

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int i = 1;
    while (i <= num)
    {
        int j = 1;
        while (j <= num)
        {
            printf("*");
            j = j + 1;
        }
        printf("\n");
        i = i + 1;
    }

    return 0;
}
