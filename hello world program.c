#include<stdio.h>
void hello();
int main(){

int num;

printf("How many times you like to print \" Hello World \" : ");
scanf("%d",&num);

printf("\n");

hello(num);



}

void hello(int num){


if (num==0){
    return;
}

printf("\nHELLO WORLD :)");
hello(num-1);



}

