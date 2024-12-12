#include<stdio.h>
int main(){
    int a=69;
    if(a%1==0 && a%a==0 && a%3==0 && a!=2) 
    {
        printf("It is a prime number");
    }
    else{
        printf("It is not prime number");
    }
}