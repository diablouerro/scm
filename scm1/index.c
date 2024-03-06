/* Code to print a traingular pattern with countinuesly counting.*/
#include<stdio.h>
int main()
{
    int n,p=1;
    printf("Enter the value of n :");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" %d",p);
            p++;
        }
       printf("\n"); 
    }
    return 0;
}
