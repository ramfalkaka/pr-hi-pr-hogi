#include<stdio.h>
int main()
{
    int n,i,j,k=0;
    printf("Enter number of lines \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf("%d",j);
        }
        for(j=1;j<=k;j++)
        {
            printf(" ");
        }
        k=k+2;
        for(j=n-i;j>=i;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;

}