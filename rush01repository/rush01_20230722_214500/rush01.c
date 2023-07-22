#include <stdio.h>

int main(int argc, char *argv[])
{
    if ((argc - 1) == 1)
    {
        printf("your first and only argument is \"%s\"", argv[0 + 1]);
    }
	else
		printf("the number of your argument(s) isn't exactly 1");
    return (0);
}
