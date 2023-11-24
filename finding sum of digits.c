#include<stdio.h>
int sum_digits();

int main(){

    int n;
    printf("\nEnter number : ");
    scanf("%d",&n);
    printf("\nSum of %d digits is : %d",n,sum_digits(n));

}

int sum_digits(int num){

if(num==0){

    return 0;

}

int last = num % 10;

 int first = sum_digits(num/10);

int sum =  first + last;

return sum;


}