// C Program to Demonstrate the use of strcmp() function
#include <stdio.h>
#include <string.h>
 
int main()
{
    
    char* first_str = "amritanshu";
    char* second_str = "amrit";
 
  
    printf("First String: %s\n", first_str);
    printf("Second String: %s\n", second_str);
 
    
    printf("Return value of strcmp(): %d",strcmp(first_str, second_str));
 
    return 0;
}