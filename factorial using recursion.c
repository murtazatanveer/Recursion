#include<stdio.h>
#include<stdlib.h>
 long long int fact();
int main(){

int n;
printf("\nEnter number you want fictorial : ");
scanf("%d",&n);

if(n==0){

    printf("\nFictorial of 0 is : 1");
    exit(1);
}

printf("\nFictorial of %d is : %lld",n,fact(n));

}

long long int fact(int num){

if (num==1){

    return 1;

}

long long int factorial = fact(num-1) * num;

return factorial;

}