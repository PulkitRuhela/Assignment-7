#include<stdio.h>

int main()
{
    int a,b,n, i,flag=0;

    printf("Enter two numbers a and b: ");
    scanf("%d %d", &a, &b);

    
   for(n=a ; n<=b ; n++)
   { 
    flag=0;
    for(i=2 ; i<=n/2 ; i++)
    {
        if(n%i==0)
        flag=1;
    }
    if(flag==0)
        printf("\n%d", n);
   }     
       
    return 0;
}