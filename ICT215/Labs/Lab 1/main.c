#include <stdio.h>
#define SHOW 25   // show only if value is 25

// use line 1 or 2 in turn and explain the resulting output for x and y

//int x, y, *ap, z;       // 1 global
main()
{
 int x, y, *ap, z;       // 2 local

    x = 10;
    y = 25;
   ap = &x;
  // y = ++*ap;     // 3 uncomment each of the following one at a time and explain
   y = *++ap;     // 4 the results of x, y and z.
  // y = *ap++;       // 5

   *ap = 6;

    if (y >= SHOW)
    {
        printf("x = %d\t y = %d\t z = %d\n", x, y, z);
      	printf("\n&x = %lu\t &y = %lu\t &z = %lu ap = %lu\n", &x, &y, &z, ap);
    }
    printf("x = %d\t y = %d\t z = %d\n", x, y, z);
   getchar();

   return 0;
}
