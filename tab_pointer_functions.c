/*
** EPITECH PROJECT, 2020
** Workshop
** File description:
** tab_pointer_functions
*/

#include "tab_pointer_functions.h"

// Pensez à coder vos fonctions d'affichage, si ce n'est pas le cas, il est possible que vos extensions vous signalent des erreurs.

static const func_struct_t FUNC_LIST[] = {
    {"normal", &print_normal},
    {"reverse", &print_rev},
    {"upper", &print_upper},
    // Implémentez les fonctions que vous souhaitez mais le but reste d'apprendre à utiliser les tableaux de pointeurs sur fonctions.
    {NULL, NULL}
};
