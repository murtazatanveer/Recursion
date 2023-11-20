#include<stdio.h>

int factorial(int);

void table(int);

void table (int token){


for(int i=1;i<=10;i++){

printf("\n%d * %d = %d ",token,i,(token*i));

}



}

int factorial(int tok){

int i;
int fact=1;

for(i=1;i<=tok;i++){

fact = fact * i;

}

return fact;


}