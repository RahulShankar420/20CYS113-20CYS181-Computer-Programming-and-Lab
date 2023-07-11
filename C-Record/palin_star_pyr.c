#include <stdio.h>
int main() {
   int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   printf("*\n");
   for (i = 1; i <= rows; ++i) {
       printf("* ");
      for (j = 1; j <= i; ++j) {
         printf("%d ", j);
      }
      printf("* ");
      printf("\n");
   }
     for (i = rows; i >= 1; --i) {
         printf("* ");
      for (j = 1; j <= i; ++j) {
         printf("%d ",j);
      }
      printf("* ");
      printf("\n");
   }
   printf("*\n");
   return 0;
}
