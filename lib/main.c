/*
** ETNA PROJECT, 29/03/2021 by blanch_b
** Project my_crd
** File description:
**      main function
*/

#include <stdio.h>
#include "../include/header.h"
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    crd_struct_f *list = NULL;
    char *test = my_readline();
    while (test != NULL) {
        int nbwords = nbr_words(test);
        if (nbwords == 1)
            list = one_entry(list, test);
        else if (nbwords == 2)
            list = two_entry(list, test);
        free (test);
      test = my_readline();
    }
    freememory(list);
    return (0);
}
