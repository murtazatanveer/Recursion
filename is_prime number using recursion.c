#include<stdio.h>
static int copy,count=0;

void is_prime();

int main(){

printf("\nEnter Number to check whether it is prime number or not : ");
scanf("%d",&copy);

is_prime(copy);

if(count==2){
    printf("\n%d is prime number\n",copy);
}

else{

 printf("\n%d is not a prime number\n",copy);

}

}

void is_prime(int num){
    
if(num==0){
    return;
}

is_prime(num-1);

if(copy%num==0){

count++;

}

}