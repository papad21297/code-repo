#include <stdio.h>

solve_puzzle(char *input);

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        solve_puzzle(argv[1]);
    }
    else
    {
        printf("error...");
    }
    return (0);
}

solve_puzzle(char *input)
{
    printf("your input: \"%s\"", input);
}