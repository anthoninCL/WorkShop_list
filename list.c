/*
** EPITECH PROJECT, 2020
** Workshop
** File description:
** list.c
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "list.h"

promo_t *create_list(char *name, char *lastname, int age)
{
    promo_t *list = malloc(sizeof(promo_t));

    if (!list)
        return NULL;
    if (!name)
        list->name = NULL;
    else
        list->name = strdup(name);
    if (!lastname)
        list->last_name = strdup(lastname);
    else
        list->last_name = strdup(lastname);
    list->age = age;
    return list;
}