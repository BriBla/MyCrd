/*
** ETNA PROJECT, 29/03/2021 by blanch_b
** Project my_crd
** File description:
**      Delete node
*/

#include "../include/header.h"
#include <stdlib.h>

void delete_node(crd_struct_f **list, const int key_ref)
{
    while (*list != NULL) {
        crd_struct_f *tmp = *list;
        crd_struct_f *prev = NULL;
        if (tmp->key == key_ref && tmp != NULL) {
            *list = tmp->next;
            free (tmp);
        } else {
            while (tmp != NULL && tmp->key != key_ref) {
                prev = tmp;
                tmp = tmp->next;
            }
            if (tmp == NULL) {
                return;
            }
            prev->next = tmp->next;
            free (tmp);
        }
    }
}