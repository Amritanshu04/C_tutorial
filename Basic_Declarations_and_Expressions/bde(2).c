/*  

Write a C program to get the C version you are using.
Expected Output:

We are using C18!




#include <stdio.h>

int main() {
    printf("C Standard Version: %ld\n", __STDC_VERSION__);
    return 0;
}

*/ 


#include <stdio.h>

int main() 
{
    #if __STDC_VERSION__ >= 201710L
        printf("We are using C18!\n");
    #elif __STDC_VERSION__ >= 201112L
        printf("We are using C11!\n");
    #elif __STDC_VERSION__ >= 199901L
        printf("We are using C99!\n");
    #else
        printf("We are using an older C standard (C89/C90) or a non-standard C compiler!\n");
    #endif

    return 0;
}
