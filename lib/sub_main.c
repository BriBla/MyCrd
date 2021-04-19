/*
** ETNA PROJECT, 01/04/2021 by blanch_b
** DEV C Project my crd
** File description:
**      sub main functions
*/

#include <stdio.h>
#include "../include/header.h"
#include <stdlib.h>
#include <unistd.h>

crd_struct_f *one_entry(crd_struct_f *list, char *test)
{
    crd_struct_f *tmp1;
    char **words = my_str_to_word_array(test);
    int keys = my_getnbr(words[0]);
    tmp1 = show_value(keys, list);
    if (tmp1 == NULL) {
        my_putnbr(-1);
    } else {
        my_putnbr(tmp1->value);
    }
    my_putchar('\n');
    free (*words);
    free (words);
    return (list);
}

void d_entry(crd_struct_f *tmp2)
{
    if (tmp2 == NULL) {
        my_putnbr(-1);
    } else {
        my_putnbr(tmp2->value);
    }
        
}

crd_struct_f *two_entry(crd_struct_f *list, char *test)
{
    char **words = my_str_to_word_array(test);
    int keys = my_getnbr(words[0]);
    crd_struct_f *tmp2 = show_value(keys, list);
    char *str = words[1];
    char word = str[0];
    if (word == 'D') {
        d_entry(tmp2);
        delete_node(&list, keys);
    } else {
        int values = my_getnbr(words[1]);
        list = push_front_to_list(keys, values, list);
        my_putnbr(keys);
    }
    my_putchar('\n');
    free (str);
    free (*words);
    free (words);
    return (list);
}

void freememory(crd_struct_f *list)
{
    crd_struct_f *prev = NULL;
    while (list != NULL) {
        prev = list;
        list = list->next;
        free (prev);
    }
}
