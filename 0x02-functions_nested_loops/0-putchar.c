#include "main.h"
/**
*main - function prints text as output
*
*Return:return 0
*/
int main(void)
{
char bus[10] = "_putchar";
int i;
for (i = 0; i < 8; i++)
{
putchar(bus[i]);
}
putchar(10);
return (0);
}
