/*
** ETNA PROJECT, 29/03/2021 by blanch_b
** Project my_crd
** File description:
**      Insert commands
*/

#include "../include/header.h"
#include <stdlib.h>

//Je commence par remplacer si la key existe déjà, sinon j'ajoute un chainon
crd_struct_f *push_front_to_list(int keys, int values, crd_struct_f *list)
{
    int replace = 0;
    crd_struct_f *tmp1;
    tmp1 = list;
    while (tmp1 != NULL) {
        if (tmp1->key == keys) {
            tmp1->value = values;
            replace = 1;
        }
        tmp1 = tmp1->next;
    }
    if (replace == 0) {
        crd_struct_f *node;
        node = malloc(sizeof(crd_struct_f));
        if (node == 0)
            return (0);
        node->next = list;
        node->key = keys;
        node->value = values;
        return (node);
    } else {
        return (list);
    }
}

crd_struct_f *show_value(int keys, crd_struct_f *list)
{
    crd_struct_f *tmp2;
    tmp2 = list;
    while (tmp2 != NULL) {
        if (tmp2->key == keys) {
            break;
        }
        tmp2 = tmp2->next;
    }
    return (tmp2);
}
