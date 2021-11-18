#include <stdio.h>
int main()
{
  int array[10], c, d, p, t;
printf("Enter 10 integers\n");

  for (c = 0; c < 10; c++)
    scanf("%d", &array[c]);

  for (c = 0; c < 9; c++) // finding minimum element (n-1) times
  {
    p = c;

    for (d = c + 1; d < 10; d++)
    {
      if (array[p] > array[d])
        p = d;
    }
    if (p != c)
    {
      t = array[c];
      array[c] = array[p];
      array[p] = t;
    }
  }

  printf("Sorted list in ascending order:\n");

  for (c = 0; c < 10; c++)
    printf("%d\n", array[c]);

  return 0;
}
