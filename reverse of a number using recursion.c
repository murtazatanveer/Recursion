#include<stdio.h>

static int digit , rev;

int reverse();

int main(){

int num;
printf("\nEnter number you want reverse of : ");
scanf("%d",&num);

printf("\nReverse of %d is : %d",num,reverse(num));

}

int reverse(int num){

if (num==0){
    return rev;
}

digit = num%10;

rev = (rev * 10) + digit;

reverse(num/10);

}