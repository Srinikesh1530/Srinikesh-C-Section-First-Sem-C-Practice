#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a); 
    if(a>=90)
    {
       printf("Grade A");
    }
    else if(a<90 && a>=70)
    {
       printf("Grade B");
    }
     else if(a<70 && a>=50)
    {
       printf("Grade C");
    }
    else
    {
       printf("Grade D");
    }
}
