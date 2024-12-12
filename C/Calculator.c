#include<stdio.h>
int main(){
    int a = 15, b = 19;
    char sum = '%';
    if(sum == '+'){
        printf("%d",a+b);
    }
    else if (sum == '-')
    {
        printf("%d",a-b);
    }
    else if (sum =='*')
    {
        printf("%d",a*b);
    }
    else if (sum =='/')
    {
        printf("%d",a/b);
    }
    else if (sum =='%')
    {
        printf("%d",a%b);
    }
    else
    {
        
    }
    
}