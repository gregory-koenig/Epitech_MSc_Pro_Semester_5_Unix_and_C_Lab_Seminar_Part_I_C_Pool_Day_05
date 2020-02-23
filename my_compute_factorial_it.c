/*
** EPITECH PROJECT, 2019
** my_compute_factorial_rit
** File description:
** CPool Day05 Task01
*/

int my_compute_factorial_it(int nb)
{
    int res = nb;

    if (nb < 0 || nb > 12)
        return (0);
    if (nb == 0 || nb == 1)
        return (1);
    for (int i = nb - 1; i > 0; i--)
        res *= i;
    return (res);
}