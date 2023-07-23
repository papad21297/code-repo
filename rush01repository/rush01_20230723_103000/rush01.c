#include <stdio.h>
#include <unistd.h>

void solve_puzzle(char *input);
void render_each_horizintal_row(int n, char *input);

int main(int argc, char *argv[])
{
    if (argc == 2)
        solve_puzzle(argv[1]);
    else
        write(1, "invalid amount of input(s)", 26);
    return (0);
}

void solve_puzzle(char *input)
{
    // code...
    int n;
    int i;

    n = 4;
    i = 0;
    while (i < n)
    {
        render_each_horizintal_row(n, input);
        i++;
    }
}

void render_each_horizintal_row(int n, char *input)
{
    int i;

    i = 0;
    while (i < n)
    {
        printf("%d => X X X X <= %d\n", input[(4 * n) + (2 * i)] - 48,
            input[(6 * n) + (2 * i)] - 48);
    }
}