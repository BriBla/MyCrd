/*
** ETNA PROJECT, 29/03/2021 by blanch_b
** Project my_crd
** File description:
**      My header
*/

#ifndef HEADER_H
#define HEADER_H

typedef struct crd_struct
{
    int key;
    int value;
    struct crd_struct *next;
} crd_struct_f;
void my_putchar(char c);
void my_putnbr(int n);
crd_struct_f *push_front_to_list(int keys, int values, crd_struct_f *list);
void delete_node(crd_struct_f **list, const int key_ref);
char *my_readline(void);
void my_putstr(const char *str);
int is_alphanum(char c);
int nbr_words(char const *str);
int word_len(char const *str, int k);
char **my_str_to_word_array(const char *str);
crd_struct_f *show_value(int keys, crd_struct_f *list);
int my_getnbr(const char *str);
void freememory(crd_struct_f *list);
crd_struct_f *one_entry(crd_struct_f *list, char *test);
void d_entry(crd_struct_f *tmp2);
crd_struct_f *two_entry(crd_struct_f *list, char *test);
void freememory(crd_struct_f *list);

#endif