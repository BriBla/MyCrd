/*
** ETNA PROJECT, 29/03/2021 by blanch_b
** DEV C Project My Crd
** File description:
**      str input to words
*/

#include <stdio.h>
#include "../include/header.h"
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

int is_alphanum(char c)
{
    if ((c >= '0') && (c <= '9')) {
        return (1);
    }
    if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z'))) {
        return (1);
    }
    else 
        return (0);
}

int nbr_words(char const *str) 
{
    int i = 0;
    int words = 0;
    while (str[i] != '\0') {
        if (is_alphanum(str[i]) == 1) {
            words++;
        }
        while (is_alphanum(str[i]) == 1 && str[i] != '\0') {
            i++;
        }
        if (str[i] != '\0') {
            i++;
        }
    }
    return words;
}

int word_len(char const *str, int k) 
{
    char lengh = 0;
    while (is_alphanum(str[k]) == 1) {
        k++;
        lengh++;
    }
    return lengh;
}

char **my_str_to_word_array(const char *str) 
{
    char **array = malloc(sizeof(char *) * (nbr_words(str) + 1));
    int i = 0;
    int k = 0;
    int a = 0;
    while (i != nbr_words(str)) {
        a = 0;
        while (is_alphanum(str[k]) == 0) {
            k++;
        }
        array[i] = malloc(sizeof(char) * ((word_len(str, k) + 1)));
        while (is_alphanum(str[k]) == 1) {
            array[i][a] = str[k];
            a++;
            k++;
        }
        array[i][a] = '\0';
        i++;
    }
    array[i] = NULL;
    return array;
}