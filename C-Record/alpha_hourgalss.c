#include <stdio.h>
 
int main()
{
  int i, j, rows;
  char alp[] = {'C','D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 
                'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
 
  printf("Enter the number of rows: ");
  scanf("%d", &rows);
 
  for (i = 0; i <= rows; i++)
  {
    for (int j = 0; j < i; j++)
      printf(" ");
 
    for (j = i; j <= rows; j++)
      printf("%c ", alp[j-i+1]);
 
    printf("\n");
  }
 
  for (i = rows - 1; i >= 1; i--)
  {
    for (j = 0; j < i; j++)
      printf(" ");
 
    for (j = i; j <= rows; j++)
      printf("%c ", alp[j-i+1]);
 
    printf("\n");
  }
 
  return 0;
}