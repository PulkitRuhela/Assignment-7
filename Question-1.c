#include<stdio.h>
int main()
{
    int n, i, prev=0, cur=1, next=0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=0 ; i<n ; i++)
    {
        next=prev + cur;
        
        prev=cur;
        cur=next;

    }

    printf("\nThe %dth term of Fibonnaci series is: %d", n, next);

    return 0;
}