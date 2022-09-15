#include "main.h"
/**
*main - function prints text as output
*
*Return:return 0
*/
int main(void)
{
char *bus = "_putchar";
while (*bus)
{
putchar(bus);
bus++;
}
putchar("\n");
return (0);
}
