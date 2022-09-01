#include<stdio.h>
int main()
{
    int n, i, prev=0, cur=1, next=0;

    printf("Enter N: ");
    scanf("%d", &n);

    for(i=0 ; i<n ; i++)
    {
        next=prev + cur;
       
        prev=cur;
        cur=next;
    
        if(next==n)
        {
            printf("Number is found.");
            break;
        }
        if(next>n)
        {
            printf("Number is not found.");
         break;
        }
    }
    return 0;
}