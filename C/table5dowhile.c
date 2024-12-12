#include<stdio.h>
int main(){
    int a=5;
    int b=0;
    do
    {
        b++;
        printf("%d X %d = %d\n",a,b,a*b);
    } while (b<10);
    
}