#include "main.h"
/**
* _puts - function that prints a string, followed by a new line, to stdout
* @str: pointer type char
* Return: Always 0 (Success)
*/
int char(*str)
void _puts(char *str)
{
for (; *str != '\0';)
{
putchar(*str);
str++;
}
putchar('\n');
}
