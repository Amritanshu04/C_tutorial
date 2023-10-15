/*Length of String*/

#include <stdio.h>
#include <string.h>
 
int main()
{
    
    char str[] = "Amritanshu";
 
    
    printf("%s\n", str);
 
    int length = 0;
    length = strlen(str);
 
    
    printf("Length of string str is %d", length);
 
    return 0;
}