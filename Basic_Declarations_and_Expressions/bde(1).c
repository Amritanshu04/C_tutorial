/*1. Write a C program to print your name, date of birth, and mobile number.
Expected Output:

Name   : Alexandra Abramov  
DOB    : July 14, 1975  
Mobile : 99-9999999999*/



#include <stdio.h>

int main()
{
   char dob[25];
   char mob[30];
   char name [25];

   printf("Enter the Name : ");
   scanf("%s",&name); 

   printf("Enter the Date of Birth : \n");
   scanf("%s",&dob); 

   printf("Enter the Mobile No. : \n");
   scanf("%s",&mob); 


   printf("The Name is %s\n",name);
   printf("the dob is %s\n",dob);
   printf("the Mobile no. is %s\n",mob);

   return 0;
}