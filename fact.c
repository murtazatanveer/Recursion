#include<stdio.h>
#include "header file.h"

int main(){

int num;

    printf("\nEnter number you want fictorial : ");
    scanf("%d",&num);

    printf("\nFictorial of %d is : %d",num,factorial(num));
}