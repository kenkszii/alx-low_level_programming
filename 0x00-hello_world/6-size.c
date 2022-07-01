#include <stdio.h>
/**
 * main -Entry point
 * Return: 0 (success)
 * for the programm
 */
int main(void)
{
char mycharact;
int myint;
long mylong;
long long mylonglong;
float myfloat;

printf("Size of a char: %d byte(s)\n", sizeof(mycharact));
printf("Size of an int: %d byte(s)\n", sizeof(myint));
printf("Size of a long int: %d byte(s)\n", sizeof(mylong));
printf("Size of a long long int: %d byte(s)\n", sizeof(mylonglong));
printf("Size od a float: %d byte(s)\n", sizeof(myfloat));

return (0);
}
