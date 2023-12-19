#include <stdio.h>
#include <conio.h>
 
int main()
{
    int i, j, r;
    printf("Enter number of rows: ");
    scanf("%d", &r);
	
    for(i=1; i<=r; i++)
    {
        for(j=i; j<=r; j++)
        {
            if(i==1 || j==i || j==r)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
} 