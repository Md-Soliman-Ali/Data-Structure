#include<stdio.h>
int main()
{
    int a[100],n,i,u;
    printf("Enter size: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        printf("%d  ",a[i]);
    }

    printf("\nInserting Position:  ");
    scanf("%d",&u);

    for(i=n; i>=u; i--)
    {
        a[i]=a[i-1];
    }

    printf("Insert New Number: ");
    scanf("%d",&a[u]);
    printf("\n");

    for(i=0; i<=n; i++)
    {
        printf(" %d  ",a[i]);
    }

    printf("\nDeletiing Position:  ");
    scanf("%d",&u);

    for(i=u; i<n; i++)
    {
        a[i]=a[i+1];
    }

    for(i=0; i<n; i++)
    {
        printf("%d  ",a[i]);
    }

    return 0;
}
