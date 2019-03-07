#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  char *line;
  int i, j, k, flag = 0, len, count;

  for (k = 1; k < argc; k++)
  {
    line = argv[k];
    printf ("%s\n", line);
    
    len = strlen(line);
    if (len > 11)
    {
      printf("Overflow\n");
    }
    count = 0;
    if (line[len - 1] == '0' || line[len - 1] == '5')
    {
      flag += 2;
    }

    count = atoi(line);
    for (j = 0; count > 0; j++)
    {
      count -= 3;
    }
    if (count == 0)
    {
     flag += 1;
    }
    if (flag >= 1)
    {
      printf("fizz");
    }
    if (flag >= 2)
    {
      printf("buzz");
    }
    if (flag == 0)
    {
      printf("%d\n", count);
    }
    printf("\n");
    flag = 0;
  }

  return 0;
}
