/*
** EPITECH PROJECT, 2019
** my_compute_power_it
** File description:
** CPool Day05 Task03
*/

int my_compute_power_it(int nb, int p)
{
    long res = nb;

    if (p == 0)
        return (1);
    if (p < 0)
        return (0);
    for (int i = p; i > 1; i--) {
        res = res * nb;
        if (res > 2147483647) {
            return (0);
        }
    }
    return (res);
}