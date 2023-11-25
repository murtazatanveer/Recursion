#include<stdio.h>

int multiply_digits();

int main(){

    int n;
    printf("\nEnter Number : ");
    scanf("%d",&n);

    printf("\nMultiplication of digits of %d is : %d\n",n,multiply_digits(n));

}

int multiply_digits(int num){

    if (num==0){

        return 1;
    }

    int digit = num%10;

    int multiply = multiply_digits(num/10) * digit;

    return multiply;
}
/*

int num=153;

int i;
int digit;
int mul = 1;

while(num<=0){

digit = num %10;

mul = mul * digit;

num = num/10;

}

printf("%d",mul);
*/