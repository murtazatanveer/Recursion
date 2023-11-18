#include<stdio.h>
void hello();
int main(){

int num;

printf("How many times you like to print \" Hello World \" : ");
scanf("%d",&num);

hello(num);

printf("\n\n");

}

void hello(int num){

    if (num<=0){

        return;

    }

hello(num-1);
printf("\nHELLO WORLD :)");



}

