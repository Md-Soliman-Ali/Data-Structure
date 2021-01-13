#include<stdio.h>
int main()
{
    int a[100],i,n;
    printf("Please Input A Number: ");
    scanf("%d",&n);
    for(i=0;i<n/2;i++)
    {
        if(i==0)
        {
            printf("Root = ");
            scanf("%d",&a[i]);
        }
        printf("Left Side Enter :");
        scanf("%d",&a[2*i+1]);
        printf("Right Side Enter :");
        scanf("%d",&a[2*i+2]);
    }
    for(i=0;i<7;i++)
    {
        printf("a[%d] = %d\n",i,a[i]);
    }
}
