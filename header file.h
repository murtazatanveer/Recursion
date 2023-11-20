int factorial(int);

int factorial(int token){

int i;
int fact=1;

for(i=1;i<=token;i++){

fact = fact * i;

}

return fact;


}