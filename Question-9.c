#include<stdio.h>

int main()
{
    int n, r, c,sum=0, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp=n;
    while(n!=0)
    {
        r=n%10;
        c=r*r*r;
        sum=sum+c;
        n=n/10;
    }
    n=temp;
    if(n==sum)
        printf("\nIt is an Armstrong number.");
    else
        printf("\nIt is not Armstrong number.");

    return 0;
}