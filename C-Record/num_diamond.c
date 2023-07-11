/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    int n, a;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    // for first half portion
    // from top to bottom
    for (int i = 1; i <= n; i++)
    {
        // In each iteration a will
        // start from 1
        a = 9;

        // print space
        for (int j = i; j <= n; j++)
        {
            printf(" ");
        }

        // print digit
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("%d", a--);
        }

        // new line
        printf("\n");
    }

    // for second portion
    for (int i = n - 1; i >= 1; i--)
    {
        // In each iteration a will
        // start from 1
        a = 9;

        // print space
        for (int j = n; j >= i; j--)
        {
            printf(" ");
        }

        // print digit
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("%d", a--);
        }

        // new line
        printf("\n");
    }

    return 0;
}