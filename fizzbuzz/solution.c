#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "solution.h"

#define BUFLEN 255
#define BUFFER (buffer + strlen(buffer))

char *write_fizzbuzz(int argc, char **argv)
{
  char *buffer = (char *) malloc(BUFLEN * sizeof(char));
  char *line;
  int i = 0, j, k, flag = 0, len, count;

  for (k = 1; k < argc; k++)
  {
    count = 0;
    line = argv[k];
    
    len = strlen(line);
    if (len > 11)
    {
      sprintf(BUFFER, "Overflow");
    }
    if (line[len - 1] == '0' || line[len - 1] == '5')
    {
      flag |= 2;
    }

    count = atoi(line);
    for (j = 0; count > 0; j++)
    {
      count -= 3;
    }
    if (count == 0)
    {
     flag |= 1;
    }
    if (flag & 1)
    {
      sprintf(BUFFER, "fizz");
    }
    if (flag & 2)
    {
      sprintf(BUFFER, "buzz");
    }
    if (flag == 0)
    {
      sprintf(BUFFER, "%s\n", line);
    }
    //printf("\n");
    flag = 0;
  }
  return buffer;
}

//int main(int argc, char **argv)
//{
//  char *result = write_fizzbuzz(argc, argv);
//
//  printf("%s\n", result);
//
//  free(result);
//  return 0;
//}
