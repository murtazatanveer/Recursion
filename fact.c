#include<stdio.h>
#include "header file.h"

int main(){

int choice;

printf("\npress 1 for fictorial and 2 for table : ");
scanf("%d",&choice);

if (choice==1){


int num;

    printf("\nEnter number you want fictorial : ");
    scanf("%d",&num);

    printf("\nFictorial of %d is : %d",num,factorial(num));
    }

    else if(choice==2){
        int n;

printf("\nEnter number you want to find table below 11 : ");
scanf("%d",&n);
printf("\n");
table(n);

    }
}