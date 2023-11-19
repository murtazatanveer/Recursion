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



printf("\nHELLO WORLD :)");
printf("\nhy");

hello(num-1);



}

