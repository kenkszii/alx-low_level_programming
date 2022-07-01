#include <stdio.h>
/**
 * main -Entry point
 *
 * return: 0 (success)
 * for the programm
 */
int main(void)
{
char mycharact;
int myint;
long mylong;
long long mylonglong;
float myfloat;

printf("Size of a char: %lu byte(s)\n", sizeof(mycharact));
printf("Size of an int: %lu bytes(s)\n", sizeof(myint));
printf("Size of a long int: %lu bytes(s)\n", sizeof(mylong));
printf("Size of a long long int: %lu byte(s)\n", sizeof(mylonglong));
printf("Size od a float: %lu bytes(s)\n", sizeof(myfloat));

return (0);
}
