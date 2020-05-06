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
    // Creation et allocation d'un nouvel element
    promo_t *list = malloc(sizeof(promo_t));

    // Verification du retour de malloc
    if (!list)
        return NULL;
    // Remplissage de la structure
    if (!name)
        list->name = NULL;
    else
        list->name = strdup(name);
    if (!lastname)
        list->last_name = NULL;
    else
        list->last_name = strdup(lastname);
    list->age = age;
    list->next = NULL;
    return list;
}
