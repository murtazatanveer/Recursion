#include<stdio.h>
int sum();

int main(){

int n;
printf("\nEnter number you want triangular number of : ");
scanf("%d",&n);

printf("\nTriangular number of %d is %d ",n,sum(n));

}

int sum(int num){

    if(num==1){

        return 1;
    }

    int sum_of_num = sum(num-1) + num;
    return sum_of_num;
}