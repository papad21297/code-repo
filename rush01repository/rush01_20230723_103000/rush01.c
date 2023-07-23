#include <stdio.h>

int     count_input_length(char *input);
void    solve_puzzle(char *input);

int main(int argc, char *argv[])
{
    int n;

    n = 4;
    if ((argc == 2) && (count_input_length(argv[1]) == (2 * (n * 4)) - 1))
    {
        solve_puzzle(argv[1]);
    }
    else
    {
        printf("error...");
    }
    return (0);
}

void solve_puzzle(char *input)
{
    printf("your input: \"%s\"", input);
}

int    count_input_length(char *input)
{
    int length;
    int i;

    i = 0;
    while (input[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}