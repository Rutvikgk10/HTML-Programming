#include<stdio.h>
int main(){
    int a=300;
    if(a%4==0)
    {
        printf("the year is leap year");
    }
    else if(a%100!=0)
    {
        printf("the year is not leap year");
    }
    else
    {
        printf("Invalid");
    }
}