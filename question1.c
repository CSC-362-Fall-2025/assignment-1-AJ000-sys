#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int n;
  int *arr = NULL;

  printf("Enter the number of integers: ");
  if (scanf("%d", &n) != 1)
  {
    printf("Error: Invalid input. Please enter an integer.\n");
    return 1;
  }

  if (n <= 0)
  {
    printf("Number of elements must be positive. Nothing to allocate.\n");
    return 0;
  }

  arr = (int *)malloc(n * sizeof(int));

  if (arr == NULL)
  {
    printf("Error: Memory allocation failed!\n");
    return 1;
  }

  printf("Enter %d integers:\n", n);
  for (int i = 0; i < n; i++)
  {
    printf("Element %d: ", i + 1);
    if (scanf("%d", &arr[i]) != 1)
    {
      printf("Error: Invalid input. Program terminating.\n");
      free(arr); 
      return 1;
    }
  }

  printf("\nIntegers in reverse order:\n");
  for (int i = n - 1; i >= 0; i--)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");

  free(arr);
  arr = NULL;

  return 0;
}
