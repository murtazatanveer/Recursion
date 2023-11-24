#include<stdio.h>
int main(){

int num,sum=0,last=0;

printf("\nEnter number to find sum of digits : ");
scanf("%d",&num);
int copy=num;

while(num!=0)
{
     last = num %10  ;
     sum = sum + last;
    num=num/10;
}

printf("\nsum of digits of %d is : %d",copy,sum);

}