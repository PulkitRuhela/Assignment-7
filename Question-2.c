#include<stdio.h>
int main()
{
    int n, i, prev=0, cur=1, next=0;

    printf("Enter N: ");
    scanf("%d", &n);

    for(i=0 ; i<n ; i++)
    {
        next=prev + cur;
        printf("%d ",next);

        prev=cur;
        cur=next;
    }

    return 0;
}