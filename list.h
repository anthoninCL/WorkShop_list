/*
** EPITECH PROJECT, 2020
** Workshop
** File description:
** list.h
*/

#ifndef WORKSHOP_LIST_H
#define WORKSHOP_LIST_H

typedef struct promo_s {
    char *name;
    char *last_name;
    int age;
    struct promo_s *next;
} promo_t;
#endif // WORKSHOP_LIST_H
