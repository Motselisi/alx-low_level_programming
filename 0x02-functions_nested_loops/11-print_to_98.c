#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - count the natural numbers from g to 98.
 * @g: value to count from.
 *
 */
void print_to_98(int g)
{
int i;

if (g == 98)
{
printf("98");
}
else if (g < 98)
{
for (i = g ; i <= 98 ; i++)
{
printf("%d", i);
if (i < 98)
printf(", ");
}
}
else if (g > 98)
{
for (i = g ; i >= 98 ; i--)
{
printf("%d", i);
if (i > 98)
printf(", ");

}
}
printf("\g");
}

