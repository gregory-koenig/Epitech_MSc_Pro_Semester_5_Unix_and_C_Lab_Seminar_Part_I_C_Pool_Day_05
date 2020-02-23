/*
** EPITECH PROJECT, 2019
** my_compute_factorial_rec
** File description:
** CPool Day05 Task02
*/

int my_compute_factorial_rec(int nb)
{
    int res;

    if (nb < 0 || nb > 12)
        return (0);
    if (nb == 0 || nb == 1)
        return (1);
    res = nb * my_compute_factorial_rec(nb - 1);
    return (res);
}