#include<stdio.h>
int main(){


unsigned long long int i,j=1,sum=0;

for(i=1;i<=64;i++){

sum=sum+j;

j=j*2;

}

printf("\n%llu",sum);

}