#include <stdio.h>
int main() {
   int i, j, rws;
   printf("Enter the number of rows: ");
   scanf("%d", &rws);
   for (i = 1; i <= rws; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}
