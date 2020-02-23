/*
** EPITECH PROJECT, 2019
** my_compute_power_rec
** File description:
** CPool Day05 Task04
*/

int my_compute_power_rec(int nb, int p)
{
    long res = nb;

    if (p == 0)
        return (1);
    if (p < 0)
        return (0);
    if (res > 2147483647)
        return (0);
    if (p > 1)
        res =  nb * my_compute_power_rec(nb, p -1);
    return (res);
}