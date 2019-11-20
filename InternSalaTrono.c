#include<stdio.h>
main()
{
    int i,j;
    int n;
printf("Enter value of n");
scanf("%d",&n);
int c=1;
    for(i=1;i<2*n;i++)
    {
        for(j=1;j<=2*c-1;j++)
        {
            printf("*");
        }

    if(i<n)
    {
      c++;
    }

    else
    {
        c--;
    }
    printf("\n");
}
}
