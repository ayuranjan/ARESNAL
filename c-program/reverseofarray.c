#include<stdio.h>
#define SIZE 30
int main() {
   int arr[SIZE], i, j, num, swap;

   printf("\nEnter number of elements  to be entered to the array: ");
   scanf("%d", &num);

   printf("Enter %d number of elements into array arr",num);

   for (i = 0; i < num; i++) {
      scanf("%d", &arr[i]);
   }

   j = num - 1;
   i = 0;

   while (i < j) {
      swap = arr[i];
      arr[i] = arr[j];
      arr[j] = swap;
      i++;
      j--;
   }



   printf("\nResultant array after reversal : ");
   for (i = 0; i < num; i++) {
      printf("%d \t", arr[i]);
   }

   return 0;
}
