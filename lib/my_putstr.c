/*
** ETNA PROJECT, 16/03/2021 by blanch_b
** DEV C Quest 2 . 1
** File description:
**      Put str
*/

#include "../include/header.h"
#include <unistd.h>

void my_putchar(char c)
{
  write(1, &c, 1);
}

void my_putnbr(int n)
{
    if (n == -2147483648) {
        my_putchar('-');
        my_putchar('2');
        n = 147483648;
    }
    if (n < 0) {
        my_putchar('-');
        n = -n;
    }
    if (n >= 10) {
        my_putnbr(n / 10);
    }
    my_putchar(48 + n % 10);
}

void my_putstr(const char *str)
{
    int n;
    n = 0;
    while (str[n] != '\0') {
        my_putchar(str[n]);
        n++;
    }
}

int my_getnbr(const char *str)
{
    int nbr = 0;
    int tmp = 0;
    int i = 0;
    int neg = 0;
    while ((str[i] < '0') || (str[i] > '9')) {
        if (str[i] == '-') {
        neg = neg + 1;
        } else {
            return 0;
        }
        i++;
    }
    if ((str[i] < '0') || (str[i] > '9')) {
        i++;
        return 0;
    }
    while ((str[i] >= '0') && (str[i] <= '9')) {
        tmp  = (str[i] - '0');
        nbr = nbr * 10 + tmp;
        i++;
    }
    if (nbr == -134217686)
        return 0;
    if (neg%2 == 1) {
        return -nbr;
    } else {
    return nbr;
    }
}
