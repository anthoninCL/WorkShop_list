/*
** EPITECH PROJECT, 2020
** Workshop
** File description:
** tab_pointer_functions
*/

#ifndef TAB_POINTER_FUNCTIONS_H_
#define TAB_POINTER_FUNCTIONS_H_

/*
Insérez les prototypes de vos fonctions d'affichage nécessaires au tableau ici.
*/

typedef struct func_struct_s
{
    char *print_mode;
    void (*function)(const char *str);
} func_struct_t;

#endif /* !TAB_POINTER_FUNCTIONS_H_ */
