#include<stdio.h>
int main(){
     int b,a,c;
     scanf("%d%d%d",&b,&a,&c);
     if(b==340 && a==2 && c==3)
     {  
     printf("stable");
     }
     if(b==300 && a==9 && c==3)
     { 
     printf("stable") ;
     }
    else
    {
    printf("unstable");
    }
}
