#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a%4==0 || a%100==0 || a%400==0)
    { 
       printf("The Given Year Is Leap Year");
    }
    else
    {
        printf("The Given Year Is  Not a Leap Year ");
    }
}
