/*
** EPITECH PROJECT, 2019
** my_is_prime
** File description:
** CPool Day05 Task06
*/

int my_is_prime(int nb)
{
    if (nb <= 0 || nb == 1)
        return (0);
    for (int i = 2; i < nb; i++) {
        if (nb % i == 0)
            return (0);
    }
    return (1);
}