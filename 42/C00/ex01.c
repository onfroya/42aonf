/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aonfroy <aonfroy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 23:08:57 by aonfroy           #+#    #+#             */
/*   Updated: 2024/09/12 23:09:17 by aonfroy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_print_alphabet(void) {
    char letter;
    
    // Boucle pour parcourir les lettres de 'a' à 'z'
    for (letter = 'a'; letter <= 'z'; letter++) {
        putchar(letter);
    }
    
    // Pour s'assurer que le programme termine la ligne après l'affichage
    putchar('\n');
}

int main() {
    ft_print_alphabet();  // Appel de la fonction pour afficher l'alphabet
    return 0;
}