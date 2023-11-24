#include<stdio.h>
void hello();
int main(){

int num=3;

hello(num);

}

void hello(int num){

if (num<=0){
    return;
}

printf("\nHello");
hello(num-1);

printf("\nHi");

}